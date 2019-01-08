//
//  NSData+SKHash.m
//  SKToolDemo
//
//  Created by sunke on 14-12-19.
//  Copyright © 2014 sunke. All rights reserved.
//

#import "NSData+SKHash.h"
#include <CommonCrypto/CommonCrypto.h>

@implementation NSData (SKHash)
/**
 *  @summary  md5 NSData
 */
- (NSData *)sk_md5Data
{
    unsigned char bytes[CC_MD5_DIGEST_LENGTH];
    CC_MD5(self.bytes, (CC_LONG)self.length, bytes);
    return [NSData dataWithBytes:bytes length:CC_MD5_DIGEST_LENGTH];
}
/**
 *  @summary  sha1Data NSData
 */
- (NSData *)sk_sha1Data
{
    unsigned char bytes[CC_SHA1_DIGEST_LENGTH];
    CC_SHA1(self.bytes, (CC_LONG)self.length, bytes);
    return [NSData dataWithBytes:bytes length:CC_SHA1_DIGEST_LENGTH];
}
/**
 *  @summary  sha256Data NSData
 */
- (NSData *)sk_sha256Data
{
    unsigned char bytes[CC_SHA256_DIGEST_LENGTH];
    CC_SHA256(self.bytes, (CC_LONG)self.length, bytes);
    return [NSData dataWithBytes:bytes length:CC_SHA256_DIGEST_LENGTH];
}
/**
 *  @summary  sha512Data NSData
 */
- (NSData *)sk_sha512Data
{
    unsigned char bytes[CC_SHA512_DIGEST_LENGTH];
    CC_SHA512(self.bytes, (CC_LONG)self.length, bytes);
    return [NSData dataWithBytes:bytes length:CC_SHA512_DIGEST_LENGTH];
}
/**
 *  @summary  md5 NSData
 *
 *  @param key 密钥
 *
 *  @return 结果
 */
- (NSData *)sk_hmacMD5DataWithKey:(NSData *)key {
    return [self sk_hmacDataUsingAlg:kCCHmacAlgMD5 withKey:key];
}
/**
 *  @summary  sha1Data NSData
 *
 *  @param key 密钥
 *
 *  @return 结果
 */
- (NSData *)sk_hmacSHA1DataWithKey:(NSData *)key
{
    return [self sk_hmacDataUsingAlg:kCCHmacAlgSHA1 withKey:key];
}
/**
 *  @summary  sha256Data NSData
 *
 *  @param key 密钥
 *
 *  @return 结果
 */
- (NSData *)sk_hmacSHA256DataWithKey:(NSData *)key
{
    return [self sk_hmacDataUsingAlg:kCCHmacAlgSHA256 withKey:key];
}
/**
 *  @summary  sha512Data NSData
 *
 *  @param key 密钥
 *
 *  @return 结果
 */
- (NSData *)sk_hmacSHA512DataWithKey:(NSData *)key
{
    return [self sk_hmacDataUsingAlg:kCCHmacAlgSHA512 withKey:key];
}


- (NSData *)sk_hmacDataUsingAlg:(CCHmacAlgorithm)alg withKey:(NSData *)key {
    
    size_t size;
    switch (alg) {
        case kCCHmacAlgMD5: size = CC_MD5_DIGEST_LENGTH; break;
        case kCCHmacAlgSHA1: size = CC_SHA1_DIGEST_LENGTH; break;
        case kCCHmacAlgSHA224: size = CC_SHA224_DIGEST_LENGTH; break;
        case kCCHmacAlgSHA256: size = CC_SHA256_DIGEST_LENGTH; break;
        case kCCHmacAlgSHA384: size = CC_SHA384_DIGEST_LENGTH; break;
        case kCCHmacAlgSHA512: size = CC_SHA512_DIGEST_LENGTH; break;
        default: return nil;
    }
    unsigned char result[size];
    CCHmac(alg, [key bytes], key.length, self.bytes, self.length, result);
    return [NSData dataWithBytes:result length:size];
}

@end

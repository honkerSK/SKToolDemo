//
//  NSData+SKHash.h
//  SKToolDemo
//
//  Created by sunke on 14-12-19.
//  Copyright © 2014 sunke. All rights reserved.
//


#import <Foundation/Foundation.h>


@interface NSData (SKHash)

/**
 *  @summary  md5 NSData
 */
@property (readonly) NSData *sk_md5Data;
/**
 *  @summary  sha1Data NSData
 */
@property (readonly) NSData *sk_sha1Data;
/**
 *  @summary  sha256Data NSData
 */
@property (readonly) NSData *sk_sha256Data;
/**
 *  @summary  sha512Data NSData
 */
@property (readonly) NSData *sk_sha512Data;

/**
 *  @summary  md5 NSData
 *
 *  @param key 密钥
 *
 *  @return 结果
 */
- (NSData *)sk_hmacMD5DataWithKey:(NSData *)key;
/**
 *  @summary  sha1Data NSData
 *
 *  @param key 密钥
 *
 *  @return 结果
 */
- (NSData *)sk_hmacSHA1DataWithKey:(NSData *)key;
/**
 *  @summary  sha256Data NSData
 *
 *  @param key 密钥
 *
 *  @return 结果
 */
- (NSData *)sk_hmacSHA256DataWithKey:(NSData *)key;
/**
 *  @summary  sha512Data NSData
 *
 *  @param key 密钥
 *
 *  @return 结果
 */
- (NSData *)sk_hmacSHA512DataWithKey:(NSData *)key;


@end


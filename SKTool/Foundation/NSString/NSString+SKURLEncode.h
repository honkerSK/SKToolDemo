//
//  NSString+SKURLEncode.h
//  SKToolDemo
//
//  Created by sunke on 14-12-19.
//  Copyright © 2014 sunke. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSString (SKURLEncode)

/**
 *  @summary  urlEncode
 *
 *  @return urlEncode 后的字符串
 */
- (NSString *)sk_urlEncode;
/**
 *  @summary  urlEncode
 *
 *  @param encoding encoding模式
 *
 *  @return urlEncode 后的字符串
 */
- (NSString *)sk_urlEncodeUsingEncoding:(NSStringEncoding)encoding;
/**
 *  @summary  urlDecode
 *
 *  @return urlDecode 后的字符串
 */
- (NSString *)sk_urlDecode;
/**
 *  @summary  urlDecode
 *
 *  @param encoding encoding模式
 *
 *  @return urlDecode 后的字符串
 */
- (NSString *)sk_urlDecodeUsingEncoding:(NSStringEncoding)encoding;

/**
 *  @summary  url query转成NSDictionary
 *
 *  @return NSDictionary
 */
- (NSDictionary *)sk_dictionaryFromURLParameters;

@end



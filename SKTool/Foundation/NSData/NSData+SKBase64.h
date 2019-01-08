//
//  NSData+SKBase64.h
//  SKToolDemo
//
//  Created by sunke on 14-12-19.
//  Copyright © 2014 sunke. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSData (SKBase64)
/**
 *  @summary  字符串base64后转data
 *
 *  @param string 传入字符串
 *
 *  @return 传入字符串 base64后的data
 */
+ (NSData *)sk_dataWithBase64EncodedString:(NSString *)string;
/**
 *  @summary  NSData转string
 *
 *  @param wrapWidth 换行长度  76  64
 *
 *  @return base64后的字符串
 */
- (NSString *)sk_base64EncodedStringWithWrapWidth:(NSUInteger)wrapWidth;
/**
 *  @summary  NSData转string 换行长度默认64
 *
 *  @return base64后的字符串
 */
- (NSString *)sk_base64EncodedString;

@end



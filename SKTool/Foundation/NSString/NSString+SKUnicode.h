//
//  NSString+SKUnicode.h
//  SKToolDemo
//
//  Created by sunke on 10/1/2019.
//  Copyright © 2019 sunke. All rights reserved.
//


#import <Foundation/Foundation.h>

//Unicode与UTF8互转、URL编码和解码

@interface NSString (SKUnicode)
/**
 Unicode转UTF8
 
 @param string Unicode字符串
 @return UTF8字符串
 */
+ (NSString *)sk_utf8FromUnicode: (NSString *)string;

/**
 UTF8转Unicode
 
 @param string UTF8字符串
 @return Unicode字符串
 */
+ (NSString *)sk_utf8ToUnicode: (NSString *)string;



/**
 URL编码
 
 @param input 编码前字符串
 @return 编码后字符串
 */
+ (NSString *)sk_encodeToPercentEscapeString: (NSString *) input;

/**
 URL解码
 
 @param input 编码后字符串
 @return 解码后的字符串
 */
+ (NSString *)sk_decodeFromPercentEscapeString: (NSString *) input;


@end


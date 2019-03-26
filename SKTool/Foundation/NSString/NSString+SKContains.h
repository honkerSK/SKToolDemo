//
//  NSString+SKContains.h
//  SKToolDemo
//
//  Created by sunke on 14-12-19.
//  Copyright © 2014 sunke. All rights reserved.
//

#import <Foundation/Foundation.h>


@interface NSString (SKContains)

/**
 *  @summary  判断URL中是否包含中文
 *
 *  @return 是否包含中文
 */
- (BOOL)sk_isContainChinese;

/**
 *  @summary  是否包含空格
 *
 *  @return 是否包含空格
 */
- (BOOL)sk_isContainBlank;

/**
 *  @summary  Unicode编码的字符串转成NSString
 *
 *  @return Unicode编码的字符串转成NSString
 */
- (NSString *)sk_makeUnicodeToString;

- (BOOL)sk_containsCharacterSet:(NSCharacterSet *)set;

/**
 *  @summary 是否包含字符串
 *
 *  @param string 字符串
 *
 *  @return YES, 包含;
 */
- (BOOL)sk_containsaString:(NSString *)string;

/**
 *  @summary 获取字符数量
 */
- (int)sk_wordsCount;

@end


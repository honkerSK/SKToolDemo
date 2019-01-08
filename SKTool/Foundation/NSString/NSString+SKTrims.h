//
//  NSString+SKTrims.h
//  SKToolDemo
//
//  Created by sunke on 14-12-19.
//  Copyright © 2014 sunke. All rights reserved.
//

#import <Foundation/Foundation.h>


@interface NSString (SKTrims)

/**
 *  @summary  清除html标签
 *
 *  @return 清除后的结果
 */
- (NSString *)sk_stringByStrippingHTML;
/**
 *  @summary  清除js脚本
 *
 *  @return 清楚js后的结果
 */
- (NSString *)sk_stringByRemovingScriptsAndStrippingHTML;
/**
 *  @summary  去除空格
 *
 *  @return 去除空格后的字符串
 */
- (NSString *)sk_trimmingWhitespace;
/**
 *  @summary  去除字符串与空行
 *
 *  @return 去除字符串与空行的字符串
 */
- (NSString *)sk_trimmingWhitespaceAndNewlines;

@end


//
//  NSString+SKSize.h
//  SKToolDemo
//
//  Created by sunke on 14-12-19.
//  Copyright © 2014 sunke. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@interface NSString (SKSize)
/**
 *  @summary 计算文字的高度
 *
 *  @param font  字体(默认为系统字体)
 *  @param width 约束宽度
 */
- (CGFloat)sk_heightWithFont:(UIFont *)font constrainedToWidth:(CGFloat)width;

/**
 *  @summary 计算文字的宽度
 *
 *  @param font   字体(默认为系统字体)
 *  @param height 约束高度
 */
- (CGFloat)sk_widthWithFont:(UIFont *)font constrainedToHeight:(CGFloat)height;

/**
 *  @summary 计算文字的大小
 *
 *  @param font  字体(默认为系统字体)
 *  @param width 约束宽度
 */
- (CGSize)sk_sizeWithFont:(UIFont *)font constrainedToWidth:(CGFloat)width;

/**
 *  @summary 计算文字的大小
 *
 *  @param font   字体(默认为系统字体)
 *  @param height 约束高度
 */
- (CGSize)sk_sizeWithFont:(UIFont *)font constrainedToHeight:(CGFloat)height;

/**
 *  @summary  反转字符串
 *
 *  @param strSrc 被反转字符串
 *
 *  @return 反转后字符串
 */
+ (NSString *)sk_reverseString:(NSString *)strSrc;

@end


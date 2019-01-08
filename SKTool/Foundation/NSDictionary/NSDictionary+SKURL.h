//
//  NSDictionary+SKURL.h
//  SKToolDemo
//
//  Created by sunke on 14-12-18.
//  Copyright © 2014 sunke. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSDictionary (SKURL)

/**
 *  @summary  将url参数转换成NSDictionary
 *
 *  @param query url参数
 *
 *  @return NSDictionary
 */
+ (NSDictionary *)sk_dictionaryWithURLQuery:(NSString *)query;

/**
 *  @summary  将NSDictionary转换成url 参数字符串
 *
 *  @return url 参数字符串
 */
- (NSString *)sk_URLQueryString;

@end



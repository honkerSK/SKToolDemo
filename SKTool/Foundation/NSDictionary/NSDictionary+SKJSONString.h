//
//  NSDictionary+SKJSONString.h
//  SKToolDemo
//
//  Created by sunke on 14-12-18.
//  Copyright © 2014 sunke. All rights reserved.
//

#import <Foundation/Foundation.h>


@interface NSDictionary (SKJSONString)

/**
 *  @summary NSDictionary转换成JSON字符串
 *
 *  @return  JSON字符串
 */
- (NSString *)sk_JSONString;

@end


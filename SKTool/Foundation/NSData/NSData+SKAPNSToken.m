//
//  NSData+SKAPNSToken.m
//  SKToolDemo
//
//  Created by sunke on 14-12-19.
//  Copyright © 2014 sunke. All rights reserved.
//

#import "NSData+SKAPNSToken.h"

@implementation NSData (SKAPNSToken)

/**
 *  @summary  将APNS NSData类型token 格式化成字符串
 *
 *  @return 字符串token
 */
- (NSString *)sk_APNSToken {
    return [[[[self description]
              stringByReplacingOccurrencesOfString: @"<" withString: @""]
             stringByReplacingOccurrencesOfString: @">" withString: @""]
            stringByReplacingOccurrencesOfString: @" " withString: @""];
}

@end

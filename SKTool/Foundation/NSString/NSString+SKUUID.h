//
//  NSString+SKUUID.h
//  SKToolDemo
//
//  Created by sunke on 14-12-19.
//  Copyright © 2014 sunke. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSString (SKUUID)

/**
 *  @summary  获取随机 UUID 例如 E621E1F8-C36C-495A-93FC-0C247A3E6E5F
 *
 *  @return 随机 UUID
 */
+ (NSString *)sk_UUID;
/**
 *
 *  @summary  毫秒时间戳 例如 1443066826371
 *
 *  @return 毫秒时间戳
 */
+ (NSString *)sk_UUIDTimestamp;

@end



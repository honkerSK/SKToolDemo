//
//  NSString+SKDictionaryValue.h
//  SKToolDemo
//
//  Created by sunke on 14-12-19.
//  Copyright © 2014 sunke. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSString (SKDictionaryValue)

/**
 *  @summary  JSON字符串转成NSDictionary
 *
 *  @return NSDictionary
 */
- (NSDictionary *)sk_dictionaryValue;

@end


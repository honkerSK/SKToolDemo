//
//  NSDictionary+SKBlock.h
//  SKToolDemo
//
//  Created by sunke on 14-12-18.
//  Copyright © 2014 sunke. All rights reserved.
//

#import <Foundation/Foundation.h>


@interface NSDictionary (SKBlock)

- (void)sk_each:(void (^)(id k, id v))block;
- (void)sk_eachKey:(void (^)(id k))block;
- (void)sk_eachValue:(void (^)(id v))block;
- (NSArray *)sk_map:(id (^)(id key, id value))block;
- (NSDictionary *)sk_pick:(NSArray *)keys;
- (NSDictionary *)sk_omit:(NSArray *)key;

@end



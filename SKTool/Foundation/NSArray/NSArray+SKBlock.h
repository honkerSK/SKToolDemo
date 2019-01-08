//
//  NSArray+SKBlock.h
//  SKToolDemo
//
//  Created by sunke on 14-12-18.
//  Copyright © 2014 sunke. All rights reserved.
//

#import <Foundation/Foundation.h>

/* 遍历与过滤 */
@interface NSArray (SKBlock)

- (void)sk_each:(void (^)(id object))block;
- (void)sk_eachWithIndex:(void (^)(id object, NSUInteger index))block;
- (NSArray *)sk_map:(id (^)(id object))block;
- (NSArray *)sk_filter:(BOOL (^)(id object))block;
- (NSArray *)sk_reject:(BOOL (^)(id object))block;
- (id)sk_detect:(BOOL (^)(id object))block;
- (id)sk_reduce:(id (^)(id accumulator, id object))block;
- (id)sk_reduce:(id)initial withBlock:(id (^)(id accumulator, id object))block;



@end


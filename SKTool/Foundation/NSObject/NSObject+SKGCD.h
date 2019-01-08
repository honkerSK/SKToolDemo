//
//  NSObject+SKGCD.h
//  SKToolDemo
//
//  Created by sunke on 14-12-19.
//  Copyright © 2014 sunke. All rights reserved.
//

#import <Foundation/Foundation.h>


@interface NSObject (SKGCD)
/**
 *  @summary  异步执行代码块
 *
 *  @param block 代码块
 */
- (void)sk_performAsynchronous:(void(^)(void))block;

/**
 *  @summary  GCD主线程执行代码块
 *
 *  @param block 代码块
 *  @param wait  是否同步请求
 */
- (void)sk_performOnMainThread:(void(^)(void))block wait:(BOOL)wait;


/**
 *  @summary  延迟执行代码块
 *
 *  @param seconds 延迟时间 秒
 *  @param block   代码块
 */
- (void)sk_performAfter:(NSTimeInterval)seconds block:(void(^)(void))block;

@end


//
//  NSRunLoop+SKPerformBlock.h
//  SKToolDemo
//
//  Created by sunke on 14-12-18.
//  Copyright © 2014 sunke. All rights reserved.
//


/* 使用
 - (void)testPerformBlockAndWait
 {
 // 1
 __block BOOL flag = NO;
 
 [[NSRunLoop currentRunLoop] performBlockAndWait:^(BOOL *finish) {
 double delayInSeconds = 2.0;
 dispatch_time_t popTime = dispatch_time(DISPATCH_TIME_NOW, (int64_t)(delayInSeconds * NSEC_PER_SEC));
 dispatch_queue_t queue = dispatch_get_global_queue(DISPATCH_QUEUE_PRIORITY_DEFAULT, 0);
 dispatch_after(popTime, queue, ^(void){
 // 2
 flag = YES;
 *finish = YES;
 });
 }];
 
 // 3
 XCTAssertTrue(flag);
 }
 */

#import <Foundation/Foundation.h>
extern NSString *const NSRunloopTimeoutException;

@interface NSRunLoop (SKPerformBlock)
/**
 *  @summary   extension of NSRunLoop for waiting.
 *
 *  @param block <#block description#>
 */
- (void)sk_performBlockAndWait:(void (^)(BOOL *finish))block;
/**
 *  @summary   extension of NSRunLoop for waiting.
 *
 *  @param block <#block description#>
 */
- (void)sk_performBlockAndWait:(void (^)(BOOL *finish))block timeoutInterval:(NSTimeInterval)timeoutInterval;
@end


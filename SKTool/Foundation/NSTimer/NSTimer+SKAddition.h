//
//  NSTimer+SKAddition.h
//  SKToolDemo
//
//  Created by sunke on 14-12-18.
//  Copyright © 2014 sunke. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSTimer (SKAddition)

/**
 *  @summary  暂停NSTimer
 */
- (void)sk_pauseTimer;
/**
 *  @summary  开始NSTimer
 */
- (void)sk_resumeTimer;
/**
 *  @summary  延迟开始NSTimer
 */
- (void)sk_resumeTimerAfterTimeInterval:(NSTimeInterval)interval;

@end



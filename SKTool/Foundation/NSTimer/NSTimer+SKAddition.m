//
//  NSTimer+SKAddition.m
//  SKToolDemo
//
//  Created by sunke on 14-12-18.
//  Copyright © 2014 sunke. All rights reserved.
//

#import "NSTimer+SKAddition.h"

@implementation NSTimer (SKAddition)

/**
 *  @summary  暂停NSTimer
 */
-(void)sk_pauseTimer
{
    if (![self isValid]) {
        return ;
    }
    [self setFireDate:[NSDate distantFuture]];
}

/**
 *  @summary  开始NSTimer
 */
-(void)sk_resumeTimer
{
    if (![self isValid]) {
        return ;
    }
    [self setFireDate:[NSDate date]];
}

/**
 *  @summary  延迟开始NSTimer
 */
- (void)sk_resumeTimerAfterTimeInterval:(NSTimeInterval)interval
{
    if (![self isValid]) {
        return ;
    }
    [self setFireDate:[NSDate dateWithTimeIntervalSinceNow:interval]];
}

@end

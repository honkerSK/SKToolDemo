//
//  NSObject+SKBlock.h
//  SKToolDemo
//
//  Created by sunke on 14-12-19.
//  Copyright © 2014 sunke. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@interface NSObject (SKBlock)

+ (id)sk_performBlock:(void (^)(void))block afterDelay:(NSTimeInterval)delay;
+ (id)sk_performBlock:(void (^)(id arg))block withObject:(id)anObject afterDelay:(NSTimeInterval)delay;
- (id)sk_performBlock:(void (^)(void))block afterDelay:(NSTimeInterval)delay;
- (id)sk_performBlock:(void (^)(id arg))block withObject:(id)anObject afterDelay:(NSTimeInterval)delay;
+ (void)sk_cancelBlock:(id)block;
+ (void)sk_cancelPreviousPerformBlock:(id)aWrappingBlockHandle __attribute__ ((deprecated));

@end



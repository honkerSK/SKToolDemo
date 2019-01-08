//
//  NSObject+SKBlockTimer.m
//  SKToolDemo
//
//  Created by sunke on 14-12-19.
//  Copyright © 2014 sunke. All rights reserved.
//

#import "NSObject+SKBlockTimer.h"

@implementation NSObject (SKBlockTimer)

-(void)sk_logTimeTakenToRunBlock:(void (^)(void)) block withPrefix:(NSString*) prefixString {
    
    double a = CFAbsoluteTimeGetCurrent();
    block();
    double b = CFAbsoluteTimeGetCurrent();
    
    unsigned int m = ((b-a) * 1000.0f); // convert from seconds to milliseconds
    
    NSLog(@"%@: %d ms", prefixString ? prefixString : @"Time taken", m);
}

@end

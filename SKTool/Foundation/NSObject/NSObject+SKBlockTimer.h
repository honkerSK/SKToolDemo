//
//  NSObject+SKBlockTimer.h
//  SKToolDemo
//
//  Created by sunke on 14-12-19.
//  Copyright © 2014 sunke. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSObject (SKBlockTimer)

-(void)sk_logTimeTakenToRunBlock:(void (^)(void)) block withPrefix:(NSString*) prefixString;


@end


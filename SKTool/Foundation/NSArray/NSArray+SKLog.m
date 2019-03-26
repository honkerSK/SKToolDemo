//
//  NSArray+SKLog.m
//  SKToolDemo
//
//  Created by sunke on 10/1/2019.
//  Copyright © 2019 sunke. All rights reserved.
//

#import "NSArray+SKLog.h"

@implementation NSArray (SKLog)

-(NSString *)descriptionWithLocale:(id)locale indent:(NSUInteger)level {
    //该方法用来控制数组的输出
    NSMutableString *string = [NSMutableString string];
    [string appendString:@"[\n"];
    
    [self enumerateObjectsUsingBlock:^(id  _Nonnull obj, NSUInteger idx, BOOL * _Nonnull stop) {
        [string appendFormat:@"%@,",obj];
    }];
    
    [string appendString:@"]"];
    
    NSRange range = [string rangeOfString:@"," options:NSBackwardsSearch];
    if (range.location != NSNotFound) {
        [string deleteCharactersInRange:range];
    }
    
    return string;
}

@end

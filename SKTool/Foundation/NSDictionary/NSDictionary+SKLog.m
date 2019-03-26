//
//  NSDictionary+SKLog.m
//  SKToolDemo
//
//  Created by sunke on 10/1/2019.
//  Copyright © 2019 sunke. All rights reserved.
//

#import "NSDictionary+SKLog.h"

@implementation NSDictionary (SKLog)

// 重写系统方法
-(NSString *)descriptionWithLocale:(id)locale indent:(NSUInteger)level {
    //该方法用来控制字典的输出
    NSMutableString *string = [NSMutableString string];
    [string appendString:@"{\n"];
    
    //拼接字典中的键值对
    [self enumerateKeysAndObjectsUsingBlock:^(id  _Nonnull key, id  _Nonnull obj, BOOL * _Nonnull stop) {
        
        [string appendFormat:@"\t%@:",key];
        [string appendFormat:@"%@,\n",obj];
    }];
    
    [string appendString:@"}"];
    
    //删除最后的逗号
    NSRange range = [string rangeOfString:@"," options:NSBackwardsSearch];
    if (range.location != NSNotFound) {
        [string deleteCharactersInRange:range];
    }
    
    return string;
}

@end

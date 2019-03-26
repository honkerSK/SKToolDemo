//
//  NSString+SKUnicode.m
//  SKToolDemo
//
//  Created by sunke on 10/1/2019.
//  Copyright © 2019 sunke. All rights reserved.
//

#import "NSString+SKUnicode.h"

@implementation NSString (SKUnicode)

/**
 Unicode转UTF8
 
 @param string Unicode字符串
 @return UTF8字符串
 */
+ (NSString *)sk_utf8FromUnicode: (NSString *)string {
    
    NSString *tempStr1 = [string stringByReplacingOccurrencesOfString:@"\\u"withString:@"\\U"];
    
    NSString *tempStr2 = [tempStr1 stringByReplacingOccurrencesOfString:@"\""withString:@"\\\""];
    
    NSString *tempStr3 = [[@"\""stringByAppendingString:tempStr2] stringByAppendingString:@"\""];
    
    NSData *tempData = [tempStr3 dataUsingEncoding:NSUTF8StringEncoding];
    
    NSString *returnStr = [NSPropertyListSerialization propertyListWithData:tempData options:NSPropertyListImmutable format:NULL error:NULL];
    
    return [returnStr stringByReplacingOccurrencesOfString:@"\\r\\n"withString:@"\n"];
}


/**
 UTF8转Unicode
 
 @param string UTF8字符串
 @return Unicode字符串
 */
+(NSString *)sk_utf8ToUnicode:(NSString *)string {
    
    NSUInteger length = [string length];
    
    NSMutableString *s = [NSMutableString stringWithCapacity:0];
    
    for (int i = 0;i < length; i++) {
        
        unichar _char = [string characterAtIndex:i];
        
        //判断是否为英文和数字
        if (_char <= '9' && _char >='0') {
            
            [s appendFormat:@"%@",[string substringWithRange:NSMakeRange(i,1)]];
            
        } else if(_char >='a' && _char <= 'z') {
            
            [s appendFormat:@"%@",[string substringWithRange:NSMakeRange(i,1)]];
            
        } else if(_char >='A' && _char <= 'Z') {
            
            [s appendFormat:@"%@",[string substringWithRange:NSMakeRange(i,1)]];
            
        } else {
            
            [s appendFormat:@"\\u%x",[string characterAtIndex:i]];
        }
    }
    return s;
}



/**
 URL编码
 
 @param input 编码前字符串
 @return 编码后字符串
 */
+ (NSString *)sk_encodeToPercentEscapeString: (NSString *) input {
    
    NSString *outputStr = (NSString *) CFBridgingRelease(CFURLCreateStringByAddingPercentEscapes(kCFAllocatorDefault, (CFStringRef)input, NULL, (CFStringRef)@"!*'();:@&=+$,/?%#[]", kCFStringEncodingUTF8));
    
    return outputStr;
}



/**
 URL解码
 
 @param input 编码后字符串
 @return 解码后的字符串
 */
+ (NSString *)sk_decodeFromPercentEscapeString: (NSString *) input {
    
    NSMutableString *outputStr = [NSMutableString stringWithString:input];
    [outputStr replaceOccurrencesOfString:@"+"
                               withString:@" "
                                  options:NSLiteralSearch
                                    range:NSMakeRange(0, [outputStr length])];
    
//    return [outputStr stringByReplacingPercentEscapesUsingEncoding:NSUTF8StringEncoding];
    
    return [outputStr stringByRemovingPercentEncoding];
}



@end

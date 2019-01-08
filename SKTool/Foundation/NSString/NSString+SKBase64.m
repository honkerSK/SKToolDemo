//
//  NSString+SKBase64.m
//  SKToolDemo
//
//  Created by sunke on 14-12-19.
//  Copyright © 2014 sunke. All rights reserved.
//

#import "NSString+SKBase64.h"
#import "NSData+SKBase64.h"

@implementation NSString (SKBase64)

+ (NSString *)sk_stringWithBase64EncodedString:(NSString *)string
{
    NSData *data = [NSData sk_dataWithBase64EncodedString:string];
    if (data)
    {
        return [[self alloc] initWithData:data encoding:NSUTF8StringEncoding];
    }
    return nil;
}
- (NSString *)sk_base64EncodedStringWithWrapWidth:(NSUInteger)wrapWidth
{
    NSData *data = [self dataUsingEncoding:NSUTF8StringEncoding allowLossyConversion:YES];
    return [data sk_base64EncodedStringWithWrapWidth:wrapWidth];
}
- (NSString *)sk_base64EncodedString
{
    NSData *data = [self dataUsingEncoding:NSUTF8StringEncoding allowLossyConversion:YES];
    return [data sk_base64EncodedString];
}
- (NSString *)sk_base64DecodedString
{
    return [NSString sk_stringWithBase64EncodedString:self];
}
- (NSData *)sk_base64DecodedData
{
    return [NSData sk_dataWithBase64EncodedString:self];
}

@end

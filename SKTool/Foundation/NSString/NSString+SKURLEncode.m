//
//  NSString+SKURLEncode.m
//  SKToolDemo
//
//  Created by sunke on 14-12-19.
//  Copyright © 2014 sunke. All rights reserved.
//

#import "NSString+SKURLEncode.h"

@implementation NSString (SKURLEncode)

/**
 *  @summary  urlEncode
 *
 *  @return urlEncode 后的字符串
 */
- (NSString *)sk_urlEncode {
    return [self sk_urlEncodeUsingEncoding:NSUTF8StringEncoding];
}
/**
 *  @summary  urlEncode
 *
 *  @param encoding encoding模式
 *
 *  @return urlEncode 后的字符串
 */
- (NSString *)sk_urlEncodeUsingEncoding:(NSStringEncoding)encoding {
    return (__bridge_transfer NSString *)CFURLCreateStringByAddingPercentEscapes(NULL,
                                                                                 (__bridge CFStringRef)self,NULL,(CFStringRef)@"!*'\"();:@&=+$,/?%#[]% ",
                                                                                 CFStringConvertNSStringEncodingToEncoding(encoding));
}
/**
 *  @summary  urlDecode
 *
 *  @return urlDecode 后的字符串
 */
- (NSString *)sk_urlDecode {
    return [self sk_urlDecodeUsingEncoding:NSUTF8StringEncoding];
}
/**
 *  @summary  urlDecode
 *
 *  @param encoding encoding模式
 *
 *  @return urlDecode 后的字符串
 */
- (NSString *)sk_urlDecodeUsingEncoding:(NSStringEncoding)encoding {
    return (__bridge_transfer NSString *)CFURLCreateStringByReplacingPercentEscapesUsingEncoding(NULL,
                                                                                                 (__bridge CFStringRef)self,CFSTR(""),CFStringConvertNSStringEncodingToEncoding(encoding));
}
/**
 *  @summary  url query转成NSDictionary
 *
 *  @return NSDictionary
 */
- (NSDictionary *)sk_dictionaryFromURLParameters
{
    NSArray *pairs = [self componentsSeparatedByString:@"&"];
    NSMutableDictionary *params = [[NSMutableDictionary alloc] init];
    for (NSString *pair in pairs) {
        NSArray *kv = [pair componentsSeparatedByString:@"="];
        NSString *val = [[kv objectAtIndex:1] stringByReplacingPercentEscapesUsingEncoding:NSUTF8StringEncoding];
        [params setObject:val forKey:[kv objectAtIndex:0]];
    }
    return params;
}


@end

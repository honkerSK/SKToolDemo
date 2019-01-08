//
//  NSDictionary+SKURL.m
//  SKToolDemo
//
//  Created by sunke on 14-12-18.
//  Copyright © 2014 sunke. All rights reserved.
//

#import "NSDictionary+SKURL.h"

@implementation NSDictionary (SKURL)

/**
 *  @summary  将url参数转换成NSDictionary
 *
 *  @param query url参数
 *
 *  @return NSDictionary
 */
+ (NSDictionary *)sk_dictionaryWithURLQuery:(NSString *)query
{
    NSMutableDictionary *dict = [NSMutableDictionary dictionary];
    NSArray *parameters = [query componentsSeparatedByString:@"&"];
    for(NSString *parameter in parameters) {
        NSArray *contents = [parameter componentsSeparatedByString:@"="];
        if([contents count] == 2) {
            NSString *key = [contents objectAtIndex:0];
            NSString *value = [contents objectAtIndex:1];
//            value = [value stringByReplacingPercentEscapesUsingEncoding:NSUTF8StringEncoding];
            
            //iOS9.0
            value = [value stringByRemovingPercentEncoding];
            
            if (key && value) {
                [dict setObject:value forKey:key];
            }
        }
    }
    return [NSDictionary dictionaryWithDictionary:dict];
}

/**
 *  @summary  将NSDictionary转换成url 参数字符串
 *
 *  @return url 参数字符串
 */
- (NSString *)sk_URLQueryString
{
    NSMutableString *string = [NSMutableString string];
    for (NSString *key in [self allKeys]) {
        if ([string length]) {
            [string appendString:@"&"];
        }
//        CFStringRef escaped = CFURLCreateStringByAddingPercentEscapes(NULL,(CFStringRef)[[self objectForKey:key] description], NULL, (CFStringRef)@"!*'();:@&=+$,/?%#[]", kCFStringEncodingUTF8);
//        [string appendFormat:@"%@=%@", key, escaped];
//        CFRelease(escaped);
        
        //iOS9.0
        //NSString *charactersToEscape = @"?!@#$^&%*+,:;='\"`<>()[]{}/\\| ";
        
        NSString *charactersToEscape = @"!*'();:@&=+$,/?%#[]";
        NSCharacterSet *allowedCharacters = [[NSCharacterSet characterSetWithCharactersInString:charactersToEscape] invertedSet];
        NSString *encodedUrl = [[[self objectForKey:key] description] stringByAddingPercentEncodingWithAllowedCharacters:allowedCharacters];
//         NSString *encodedUrl = [[[self objectForKey:key] description] stringByAddingPercentEncodingWithAllowedCharacters:[NSCharacterSet URLQueryAllowedCharacterSet]];

        NSLog(@"\n%@",encodedUrl);
        
    }
    return string;
}

@end

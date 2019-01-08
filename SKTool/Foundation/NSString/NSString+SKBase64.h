//
//  NSString+SKBase64.h
//  SKToolDemo
//
//  Created by sunke on 14-12-19.
//  Copyright © 2014 sunke. All rights reserved.
//

#import <Foundation/Foundation.h>


@interface NSString (SKBase64)

+ (NSString *)sk_stringWithBase64EncodedString:(NSString *)string;
- (NSString *)sk_base64EncodedStringWithWrapWidth:(NSUInteger)wrapWidth;
- (NSString *)sk_base64EncodedString;
- (NSString *)sk_base64DecodedString;
- (NSData *)sk_base64DecodedData;

@end



//
//  NSString+SKPinyin.h
//  SKToolDemo
//
//  Created by sunke on 14-12-19.
//  Copyright © 2014 sunke. All rights reserved.
//

// NSString的中文拼音字符串
#import <Foundation/Foundation.h>


@interface NSString (SKPinyin)

- (NSString*)sk_pinyinWithPhoneticSymbol;
- (NSString*)sk_pinyin;
- (NSArray*)sk_pinyinArray;
- (NSString*)sk_pinyinWithoutBlank;
- (NSArray*)sk_pinyinInitialsArray;
- (NSString*)sk_pinyinInitialsString;

@end


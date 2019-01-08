//
//  NSString+SKEmoji.h
//  SKToolDemo
//
//  Created by sunke on 14-12-19.
//  Copyright © 2014 sunke. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

// Emoji Cheat Sheet <http://www.emoji-cheat-sheet.com>

@interface NSString (SKEmoji)

/**
 返回一个NSString， 该字符串是根据Emoji编码 转化为相匹配的unicode字符。
 
 Example:
 "This is a smiley face :smiley:"
 
 Will be replaced with:
 "This is a smiley face \U0001F604"
 */
- (NSString *)sk_stringByReplacingEmojiCheatCodesWithUnicode;

/**
 返回一个NSString， 该字符串是根据unicode字符 转化为相匹配的Emoji编码。

 Example:
 "This is a smiley face \U0001F604"
 
 Will be replaced with:
 "This is a smiley face :smiley:"
 */
- (NSString *)sk_stringByReplacingEmojiUnicodeWithCheatCodes;
@end



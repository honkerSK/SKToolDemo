//
//  NSString+SKRemoveEmoji.h
//  SKToolDemo
//
//  Created by sunke on 14-12-19.
//  Copyright © 2014 sunke. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSString (SKRemoveEmoji)

///移除所有emoji，以“”替换
- (NSString *)sk_removingEmoji;
///移除所有emoji，以“”替换
- (NSString *)sk_stringByRemovingEmoji;
///移除所有emoji，以string替换
- (NSString *)sk_stringByReplaceingEmojiWithString:(NSString*)string;

///字符串是否包含emoji
- (BOOL)sk_containsEmoji;
///字符串中包含的所有emoji unicode格式
- (NSArray<NSString *>*)sk_allEmoji;
///字符串中包含的所有emoji
- (NSString *)sk_allEmojiString;
///字符串中包含的所有emoji rang
- (NSArray<NSString *>*)sk_allEmojiRanges;

///所有emoji表情
+ (NSString*)sk_allSystemEmoji;

@end

@interface NSCharacterSet (SKEmojiCharacterSet)
+ (NSCharacterSet *)sk_emojiCharacterSet;
@end


//
//  NSString+SKScore.h
//  SKToolDemo
//
//  Created by sunke on 14-12-19.
//  Copyright © 2014 sunke. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

typedef NS_OPTIONS(NSUInteger, NSStringSKScoreOption) {
    NSStringSKScoreOptionNone = 1 << 0,
    NSStringSKScoreOptionFavorSmallerWords = 1 << 1,
    NSStringSKScoreOptionReducedLongStringPenalty = 1 << 2
};

//模糊匹配字符串 查找某两个字符串的相似程度

@interface NSString (SKScore)

- (CGFloat)sk_scoreAgainst:(NSString *)otherString;
- (CGFloat)sk_scoreAgainst:(NSString *)otherString fuzziness:(NSNumber *)fuzziness;
- (CGFloat)sk_scoreAgainst:(NSString *)otherString fuzziness:(NSNumber *)fuzziness options:(NSStringSKScoreOption)options;

@end



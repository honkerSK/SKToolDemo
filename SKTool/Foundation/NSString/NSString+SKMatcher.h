//
//  NSString+SKMatcher.h
//  SKToolDemo
//
//  Created by sunke on 14-12-19.
//  Copyright © 2014 sunke. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSString (SKMatcher)

- (NSArray *)sk_matchWithRegex:(NSString *)regex;
- (NSString *)sk_matchWithRegex:(NSString *)regex atIndex:(NSUInteger)index;
- (NSString *)sk_firstMatchedGroupWithRegex:(NSString *)regex;
- (NSTextCheckingResult *)sk_firstMatchedResultWithRegex:(NSString *)regex;

@end


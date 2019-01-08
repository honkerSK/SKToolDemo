//
//  NSUserDefaults+SKSafeAccess.h
//  SKToolDemo
//
//  Created by sunke on 14-12-18.
//  Copyright © 2014 sunke. All rights reserved.
//

#import <Foundation/Foundation.h>


@interface NSUserDefaults (SKSafeAccess)
+ (NSString *)sk_stringForKey:(NSString *)defaultName;

+ (NSArray *)sk_arrayForKey:(NSString *)defaultName;

+ (NSDictionary *)sk_dictionaryForKey:(NSString *)defaultName;

+ (NSData *)sk_dataForKey:(NSString *)defaultName;

+ (NSArray *)sk_stringArrayForKey:(NSString *)defaultName;

+ (NSInteger)sk_integerForKey:(NSString *)defaultName;

+ (float)sk_floatForKey:(NSString *)defaultName;

+ (double)sk_doubleForKey:(NSString *)defaultName;

+ (BOOL)sk_boolForKey:(NSString *)defaultName;

+ (NSURL *)sk_URLForKey:(NSString *)defaultName;

#pragma mark - WRITE FOR STANDARD
+ (void)sk_setObject:(id)value forKey:(NSString *)defaultName;

#pragma mark - READ ARCHIVE FOR STANDARD
+ (id)sk_arcObjectForKey:(NSString *)defaultName;

#pragma mark - WRITE ARCHIVE FOR STANDARD
+ (void)sk_setArcObject:(id)value forKey:(NSString *)defaultName;

@end



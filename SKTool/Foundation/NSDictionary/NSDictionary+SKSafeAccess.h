//
//  NSDictionary+SKSafeAccess.h
//  SKToolDemo
//
//  Created by sunke on 14-12-18.
//  Copyright © 2014 sunke. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@interface NSDictionary (SKSafeAccess)

- (BOOL)sk_hasKey:(NSString *)key;

- (NSString*)sk_stringForKey:(id)key;

- (NSNumber*)sk_numberForKey:(id)key;

- (NSDecimalNumber *)sk_decimalNumberForKey:(id)key;

- (NSArray*)sk_arrayForKey:(id)key;

- (NSDictionary*)sk_dictionaryForKey:(id)key;

- (NSInteger)sk_integerForKey:(id)key;

- (NSUInteger)sk_unsignedIntegerForKey:(id)key;

- (BOOL)sk_boolForKey:(id)key;

- (int16_t)sk_int16ForKey:(id)key;

- (int32_t)sk_int32ForKey:(id)key;

- (int64_t)sk_int64ForKey:(id)key;

- (char)sk_charForKey:(id)key;

- (short)sk_shortForKey:(id)key;

- (float)sk_floatForKey:(id)key;

- (double)sk_doubleForKey:(id)key;

- (long long)sk_longLongForKey:(id)key;

- (unsigned long long)sk_unsignedLongLongForKey:(id)key;

- (NSDate *)sk_dateForKey:(id)key dateFormat:(NSString *)dateFormat;

//CG
- (CGFloat)sk_CGFloatForKey:(id)key;

- (CGPoint)sk_pointForKey:(id)key;

- (CGSize)sk_sizeForKey:(id)key;

- (CGRect)sk_rectForKey:(id)key;
@end

#pragma mark - NSMutableDictionary setter

@interface NSMutableDictionary(SafeAccess)

-(void)sk_setObj:(id)i forKey:(NSString*)key;

-(void)sk_setString:(NSString*)i forKey:(NSString*)key;

-(void)sk_setBool:(BOOL)i forKey:(NSString*)key;

-(void)sk_setInt:(int)i forKey:(NSString*)key;

-(void)sk_setInteger:(NSInteger)i forKey:(NSString*)key;

-(void)sk_setUnsignedInteger:(NSUInteger)i forKey:(NSString*)key;

-(void)sk_setCGFloat:(CGFloat)f forKey:(NSString*)key;

-(void)sk_setChar:(char)c forKey:(NSString*)key;

-(void)sk_setFloat:(float)i forKey:(NSString*)key;

-(void)sk_setDouble:(double)i forKey:(NSString*)key;

-(void)sk_setLongLong:(long long)i forKey:(NSString*)key;

-(void)sk_setPoint:(CGPoint)o forKey:(NSString*)key;

-(void)sk_setSize:(CGSize)o forKey:(NSString*)key;

-(void)sk_setRect:(CGRect)o forKey:(NSString*)key;

@end


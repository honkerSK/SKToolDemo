//
//  NSArray+SKSafeAccess.h
//  SKToolDemo
//
//  Created by sunke on 14-12-18.
//  Copyright © 2014 sunke. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>


@interface NSArray (SKSafeAccess)

-(id)sk_objectWithIndex:(NSUInteger)index;

- (NSString*)sk_stringWithIndex:(NSUInteger)index;

- (NSNumber*)sk_numberWithIndex:(NSUInteger)index;

- (NSDecimalNumber *)sk_decimalNumberWithIndex:(NSUInteger)index;

- (NSArray*)sk_arrayWithIndex:(NSUInteger)index;

- (NSDictionary*)sk_dictionaryWithIndex:(NSUInteger)index;

- (NSInteger)sk_integerWithIndex:(NSUInteger)index;

- (NSUInteger)sk_unsignedIntegerWithIndex:(NSUInteger)index;

- (BOOL)sk_boolWithIndex:(NSUInteger)index;

- (int16_t)sk_int16WithIndex:(NSUInteger)index;

- (int32_t)sk_int32WithIndex:(NSUInteger)index;

- (int64_t)sk_int64WithIndex:(NSUInteger)index;

- (char)sk_charWithIndex:(NSUInteger)index;

- (short)sk_shortWithIndex:(NSUInteger)index;

- (float)sk_floatWithIndex:(NSUInteger)index;

- (double)sk_doubleWithIndex:(NSUInteger)index;

- (NSDate *)sk_dateWithIndex:(NSUInteger)index dateFormat:(NSString *)dateFormat;
//CG
- (CGFloat)sk_CGFloatWithIndex:(NSUInteger)index;

- (CGPoint)sk_pointWithIndex:(NSUInteger)index;

- (CGSize)sk_sizeWithIndex:(NSUInteger)index;

- (CGRect)sk_rectWithIndex:(NSUInteger)index;
@end


#pragma mark - NSMutableArray setter

@interface NSMutableArray(SKSafeAccess)

-(void)sk_addObj:(id)i;

-(void)sk_addString:(NSString*)i;

-(void)sk_addBool:(BOOL)i;

-(void)sk_addInt:(int)i;

-(void)sk_addInteger:(NSInteger)i;

-(void)sk_addUnsignedInteger:(NSUInteger)i;

-(void)sk_addCGFloat:(CGFloat)f;

-(void)sk_addChar:(char)c;

-(void)sk_addFloat:(float)i;

-(void)sk_addPoint:(CGPoint)o;

-(void)sk_addSize:(CGSize)o;

-(void)sk_addRect:(CGRect)o;

@end


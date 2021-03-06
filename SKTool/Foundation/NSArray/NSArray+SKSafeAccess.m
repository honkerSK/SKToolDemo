//
//  NSArray+SKSafeAccess.m
//  SKToolDemo
//
//  Created by sunke on 14-12-18.
//  Copyright © 2014 sunke. All rights reserved.
//

#import "NSArray+SKSafeAccess.h"

@implementation NSArray (SKSafeAccess)

-(id)sk_objectWithIndex:(NSUInteger)index{
    if (index <self.count) {
        return self[index];
    }else{
        return nil;
    }
}

- (NSString*)sk_stringWithIndex:(NSUInteger)index
{
    id value = [self sk_objectWithIndex:index];
    if (value == nil || value == [NSNull null] || [[value description] isEqualToString:@"<null>"])
    {
        return nil;
    }
    if ([value isKindOfClass:[NSString class]]) {
        return (NSString*)value;
    }
    if ([value isKindOfClass:[NSNumber class]]) {
        return [value stringValue];
    }
    
    return nil;
}


- (NSNumber*)sk_numberWithIndex:(NSUInteger)index
{
    id value = [self sk_objectWithIndex:index];
    if ([value isKindOfClass:[NSNumber class]]) {
        return (NSNumber*)value;
    }
    if ([value isKindOfClass:[NSString class]]) {
        NSNumberFormatter * f = [[NSNumberFormatter alloc] init];
        [f setNumberStyle:NSNumberFormatterDecimalStyle];
        return [f numberFromString:(NSString*)value];
    }
    return nil;
}

- (NSDecimalNumber *)sk_decimalNumberWithIndex:(NSUInteger)index{
    id value = [self sk_objectWithIndex:index];
    
    if ([value isKindOfClass:[NSDecimalNumber class]]) {
        return value;
    } else if ([value isKindOfClass:[NSNumber class]]) {
        NSNumber * number = (NSNumber*)value;
        return [NSDecimalNumber decimalNumberWithDecimal:[number decimalValue]];
    } else if ([value isKindOfClass:[NSString class]]) {
        NSString * str = (NSString*)value;
        return [str isEqualToString:@""] ? nil : [NSDecimalNumber decimalNumberWithString:str];
    }
    return nil;
}

- (NSArray*)sk_arrayWithIndex:(NSUInteger)index
{
    id value = [self sk_objectWithIndex:index];
    if (value == nil || value == [NSNull null])
    {
        return nil;
    }
    if ([value isKindOfClass:[NSArray class]])
    {
        return value;
    }
    return nil;
}


- (NSDictionary*)sk_dictionaryWithIndex:(NSUInteger)index
{
    id value = [self sk_objectWithIndex:index];
    if (value == nil || value == [NSNull null])
    {
        return nil;
    }
    if ([value isKindOfClass:[NSDictionary class]])
    {
        return value;
    }
    return nil;
}

- (NSInteger)sk_integerWithIndex:(NSUInteger)index
{
    id value = [self sk_objectWithIndex:index];
    if (value == nil || value == [NSNull null])
    {
        return 0;
    }
    if ([value isKindOfClass:[NSString class]] || [value isKindOfClass:[NSNumber class]])
    {
        return [value integerValue];
    }
    return 0;
}
- (NSUInteger)sk_unsignedIntegerWithIndex:(NSUInteger)index
{
    id value = [self sk_objectWithIndex:index];
    if (value == nil || value == [NSNull null])
    {
        return 0;
    }
    if ([value isKindOfClass:[NSString class]] || [value isKindOfClass:[NSNumber class]])
    {
        return [value unsignedIntegerValue];
    }
    return 0;
}
- (BOOL)sk_boolWithIndex:(NSUInteger)index
{
    id value = [self sk_objectWithIndex:index];
    
    if (value == nil || value == [NSNull null])
    {
        return NO;
    }
    if ([value isKindOfClass:[NSNumber class]])
    {
        return [value boolValue];
    }
    if ([value isKindOfClass:[NSString class]])
    {
        return [value boolValue];
    }
    return NO;
}
- (int16_t)sk_int16WithIndex:(NSUInteger)index
{
    id value = [self sk_objectWithIndex:index];
    
    if (value == nil || value == [NSNull null])
    {
        return 0;
    }
    if ([value isKindOfClass:[NSNumber class]])
    {
        return [value shortValue];
    }
    if ([value isKindOfClass:[NSString class]])
    {
        return [value intValue];
    }
    return 0;
}
- (int32_t)sk_int32WithIndex:(NSUInteger)index
{
    id value = [self sk_objectWithIndex:index];
    
    if (value == nil || value == [NSNull null])
    {
        return 0;
    }
    if ([value isKindOfClass:[NSNumber class]] || [value isKindOfClass:[NSString class]])
    {
        return [value intValue];
    }
    return 0;
}
- (int64_t)sk_int64WithIndex:(NSUInteger)index
{
    id value = [self sk_objectWithIndex:index];
    
    if (value == nil || value == [NSNull null])
    {
        return 0;
    }
    if ([value isKindOfClass:[NSNumber class]] || [value isKindOfClass:[NSString class]])
    {
        return [value longLongValue];
    }
    return 0;
}

- (char)sk_charWithIndex:(NSUInteger)index{
    
    id value = [self sk_objectWithIndex:index];
    
    if (value == nil || value == [NSNull null])
    {
        return 0;
    }
    if ([value isKindOfClass:[NSNumber class]] || [value isKindOfClass:[NSString class]])
    {
        return [value charValue];
    }
    return 0;
}

- (short)sk_shortWithIndex:(NSUInteger)index
{
    id value = [self sk_objectWithIndex:index];
    
    if (value == nil || value == [NSNull null])
    {
        return 0;
    }
    if ([value isKindOfClass:[NSNumber class]])
    {
        return [value shortValue];
    }
    if ([value isKindOfClass:[NSString class]])
    {
        return [value intValue];
    }
    return 0;
}
- (float)sk_floatWithIndex:(NSUInteger)index
{
    id value = [self sk_objectWithIndex:index];
    
    if (value == nil || value == [NSNull null])
    {
        return 0;
    }
    if ([value isKindOfClass:[NSNumber class]] || [value isKindOfClass:[NSString class]])
    {
        return [value floatValue];
    }
    return 0;
}
- (double)sk_doubleWithIndex:(NSUInteger)index
{
    id value = [self sk_objectWithIndex:index];
    
    if (value == nil || value == [NSNull null])
    {
        return 0;
    }
    if ([value isKindOfClass:[NSNumber class]] || [value isKindOfClass:[NSString class]])
    {
        return [value doubleValue];
    }
    return 0;
}

- (NSDate *)sk_dateWithIndex:(NSUInteger)index dateFormat:(NSString *)dateFormat {
    NSDateFormatter *formater = [[NSDateFormatter alloc]init];
    formater.dateFormat = dateFormat;
    id value = [self sk_objectWithIndex:index];
    
    if (value == nil || value == [NSNull null])
    {
        return nil;
    }
    
    if ([value isKindOfClass:[NSString class]] && ![value isEqualToString:@""] && !dateFormat) {
        return [formater dateFromString:value];
    }
    return nil;
}

//CG
- (CGFloat)sk_CGFloatWithIndex:(NSUInteger)index
{
    id value = [self sk_objectWithIndex:index];
    
    CGFloat f = [value doubleValue];
    
    return f;
}

- (CGPoint)sk_pointWithIndex:(NSUInteger)index
{
    id value = [self sk_objectWithIndex:index];
    
    CGPoint point = CGPointFromString(value);
    
    return point;
}
- (CGSize)sk_sizeWithIndex:(NSUInteger)index
{
    id value = [self sk_objectWithIndex:index];
    
    CGSize size = CGSizeFromString(value);
    
    return size;
}
- (CGRect)sk_rectWithIndex:(NSUInteger)index
{
    id value = [self sk_objectWithIndex:index];
    
    CGRect rect = CGRectFromString(value);
    
    return rect;
}
@end


#pragma mark - NSMutableArray setter
@implementation NSMutableArray (SKSafeAccess)
-(void)sk_addObj:(id)i{
    if (i!=nil) {
        [self addObject:i];
    }
}
-(void)sk_addString:(NSString*)i
{
    if (i!=nil) {
        [self addObject:i];
    }
}
-(void)sk_addBool:(BOOL)i
{
    [self addObject:@(i)];
}
-(void)sk_addInt:(int)i
{
    [self addObject:@(i)];
}
-(void)sk_addInteger:(NSInteger)i
{
    [self addObject:@(i)];
}
-(void)sk_addUnsignedInteger:(NSUInteger)i
{
    [self addObject:@(i)];
}
-(void)sk_addCGFloat:(CGFloat)f
{
    [self addObject:@(f)];
}
-(void)sk_addChar:(char)c
{
    [self addObject:@(c)];
}
-(void)sk_addFloat:(float)i
{
    [self addObject:@(i)];
}
-(void)sk_addPoint:(CGPoint)o
{
    [self addObject:NSStringFromCGPoint(o)];
}
-(void)sk_addSize:(CGSize)o
{
    [self addObject:NSStringFromCGSize(o)];
}
-(void)sk_addRect:(CGRect)o
{
    [self addObject:NSStringFromCGRect(o)];
}

@end

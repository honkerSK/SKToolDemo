//
//  NSObject+SKAddProperty.m
//  SKToolDemo
//
//  Created by sunke on 14-12-19.
//  Copyright © 2014 sunke. All rights reserved.
//

#import "NSObject+SKAddProperty.h"
#import <objc/runtime.h>

//objc_getAssociatedObject和objc_setAssociatedObject都需要指定一个固定的地址，这个固定的地址值用来表示属性的key，起到一个常量的作用。
static const void *SKStringProperty = &SKStringProperty;
static const void *SKIntegerProperty = &SKIntegerProperty;
//static char IntegerProperty;

@implementation NSObject (SKAddProperty)

@dynamic sk_stringProperty;
@dynamic sk_integerProperty;

//set
/**
 *  @summary  catgory runtime实现get set方法增加一个字符串属性
 */

- (void)setSk_stringProperty:(NSString *)sk_stringProperty{
    //use that a static const as the key
    objc_setAssociatedObject(self, SKStringProperty, sk_stringProperty, OBJC_ASSOCIATION_RETAIN_NONATOMIC);
    //use that property's selector as the key:
    //objc_setAssociatedObject(self, @selector(stringProperty), stringProperty, OBJC_ASSOCIATION_RETAIN_NONATOMIC);
}
//get
-(NSString *)sk_stringProperty{
    return objc_getAssociatedObject(self, SKStringProperty);
}

//set
/**
 *  @summary  catgory runtime实现get set方法增加一个NSInteger属性
 */
- (void)setSk_integerProperty:(NSInteger)sk_integerProperty{
    NSNumber *number = [[NSNumber alloc]initWithInteger:sk_integerProperty];
    objc_setAssociatedObject(self,SKIntegerProperty, number, OBJC_ASSOCIATION_ASSIGN);
}
//get
-(NSInteger)sk_integerProperty{
    return [objc_getAssociatedObject(self, SKIntegerProperty) integerValue];
}

@end

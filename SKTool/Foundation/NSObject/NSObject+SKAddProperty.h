//
//  NSObject+SKAddProperty.h
//  SKToolDemo
//
//  Created by sunke on 14-12-19.
//  Copyright © 2014 sunke. All rights reserved.
//

//objc_getAssociatedObject和objc_setAssociatedObject都需要指定一个固定的地址，这个固定的地址值用来表示属性的key，起到一个常量的作用。
//static const void *SKStringProperty = &SKStringProperty;
//static char IntegerProperty;
//@selector(methodName:)
#import <Foundation/Foundation.h>

@interface NSObject (SKAddProperty)

/**
 *  @summary  catgory runtime实现get set方法增加一个字符串属性
 */
@property (nonatomic,strong) NSString *sk_stringProperty;
/**
 *  @summary  catgory runtime实现get set方法增加一个NSInteger属性
 */
@property (nonatomic,assign) NSInteger sk_integerProperty;

@end


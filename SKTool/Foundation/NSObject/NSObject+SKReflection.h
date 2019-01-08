//
//  NSObject+SKReflection.h
//  SKToolDemo
//
//  Created by sunke on 14-12-18.
//  Copyright © 2014 sunke. All rights reserved.
//

#import <Foundation/Foundation.h>


@interface NSObject (SKReflection)
//类名
- (NSString *)sk_className;
+ (NSString *)sk_className;
//父类名称
- (NSString *)sk_superClassName;
+ (NSString *)sk_superClassName;

//实例属性字典
-(NSDictionary *)sk_propertyDictionary;

//属性名称列表
- (NSArray*)sk_propertyKeys;
+ (NSArray *)sk_propertyKeys;

//属性详细信息列表
- (NSArray *)sk_propertiesInfo;
+ (NSArray *)sk_propertiesInfo;

//格式化后的属性列表
+ (NSArray *)sk_propertiesWithCodeFormat;

//方法列表
-(NSArray*)sk_methodList;
+(NSArray*)sk_methodList;

-(NSArray*)sk_methodListInfo;

//创建并返回一个指向所有已注册类的指针列表
+ (NSArray *)sk_registedClassList;
//实例变量
+ (NSArray *)sk_instanceVariable;

//协议列表
-(NSDictionary *)sk_protocolList;
+ (NSDictionary *)sk_protocolList;


- (BOOL)sk_hasPropertyForKey:(NSString*)key;
- (BOOL)sk_hasIvarForKey:(NSString*)key;

@end



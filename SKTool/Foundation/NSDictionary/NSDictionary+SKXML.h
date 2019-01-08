//
//  NSDictionary+SKXML.h
//  SKToolDemo
//
//  Created by sunke on 14-12-18.
//  Copyright © 2014 sunke. All rights reserved.
//



#import <Foundation/Foundation.h>

@interface NSDictionary (SKXML)

/**
 *  @summary  将NSDictionary转换成XML字符串 不带XML声明 不带根节点
 *
 *  @return XML 字符串
 */
- (NSString *)sk_XMLString;
/**
 *  @summary  将NSDictionary转换成XML字符串, 默认 <?xml version=\"1.0\" encoding=\"utf-8\"?> 声明   自定义根节点
 *
 *  @param rootElement 根节点
 *
 *  @return XML 字符串
 */
- (NSString *)sk_XMLStringDefaultDeclarationWithRootElement:(NSString*)rootElement;
/**
 *  @summary  将NSDictionary转换成XML字符串, 自定义根节点  自定义xml声明
 *
 *  @param rootElement 根节点
 *
 *  @param declaration xml声明
 *
 *  @return 标准合法 XML 字符串
 */
- (NSString *)sk_XMLStringWithRootElement:(NSString*)rootElement declaration:(NSString*)declaration;
/**
 *  @summary  将NSDictionary转换成Plist字符串
 *
 *  @return Plist 字符串
 */
- (NSString *)sk_plistString;
/**
 *  @summary  将NSDictionary转换成Plist data
 *
 *  @return Plist data
 */
- (NSData *)sk_plistData;

@end


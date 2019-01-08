//
//  NSString+SKXMLDictionary.h
//  SKToolDemo
//
//  Created by sunke on 14-12-19.
//  Copyright © 2014 sunke. All rights reserved.
//


/*
 
 #import "NSString+SKXMLDictionary.h"
 
 ...
 
 NSString *XMLString = @"<test>data</test>";
 NSDictionary *XMLAsDictionary = [XMLString sk_XMLDictionary];
 
 */
#import <Foundation/Foundation.h>


@interface NSString (SKXMLDictionary)

/**
 *  @summary  xml字符串转换成NSDictionary
 *
 *  @return NSDictionary
 */
-(NSDictionary *)sk_XMLDictionary;

@end


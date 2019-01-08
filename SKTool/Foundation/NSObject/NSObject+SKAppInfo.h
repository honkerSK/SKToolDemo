//
//  NSObject+SKAppInfo.h
//  SKToolDemo
//
//  Created by sunke on 14-12-19.
//  Copyright © 2014 sunke. All rights reserved.
//

#import <Foundation/Foundation.h>


@interface NSObject (SKAppInfo)
-(NSString *)sk_version;
-(NSInteger)sk_build;
-(NSString *)sk_identifier;
-(NSString *)sk_currentLanguage;
-(NSString *)sk_deviceModel;
@end


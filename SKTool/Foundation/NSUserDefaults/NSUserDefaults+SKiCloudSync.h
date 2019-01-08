//
//  NSUserDefaults+SKiCloudSync.h
//  SKToolDemo
//
//  Created by sunke on 14-12-18.
//  Copyright © 2014 sunke. All rights reserved.
//


// 用于将NSUserDefaults与iCloud同步（NSUbiquitousKeyValueStore）
#import <Foundation/Foundation.h>

@interface NSUserDefaults (SKiCloudSync)
-(void)sk_setValue:(id)value  forKey:(NSString *)key iCloudSync:(BOOL)sync;
-(void)sk_setObject:(id)value forKey:(NSString *)key iCloudSync:(BOOL)sync;

-(id)sk_valueForKey:(NSString *)key  iCloudSync:(BOOL)sync;
-(id)sk_objectForKey:(NSString *)key iCloudSync:(BOOL)sync;

-(BOOL)sk_synchronizeAlsoiCloudSync:(BOOL)sync;
@end


//
//  NSObject+SKAssociatedObject.h
//  SKToolDemo
//
//  Created by sunke on 14-12-19.
//  Copyright © 2014 sunke. All rights reserved.
//

#import <Foundation/Foundation.h>


@interface NSObject (SKAssociatedObject)
/**
 *  @summary  附加一个stong对象
 *
 *  @param value 被附加的对象
 *  @param key   被附加对象的key
 */
- (void)sk_associateValue:(id)value withKey:(void *)key; // Strong reference
/**
 *  @summary  附加一个weak对象
 *
 *  @param value 被附加的对象
 *  @param key   被附加对象的key
 */
- (void)sk_weaklyAssociateValue:(id)value withKey:(void *)key;

/**
 *  @summary  根据附加对象的key取出附加对象
 *
 *  @param key 附加对象的key
 *
 *  @return 附加对象
 */
- (id)sk_associatedValueForKey:(void *)key;

@end


//
//  NSString+SKMIME.h
//  SKToolDemo
//
//  Created by sunke on 14-12-19.
//  Copyright © 2014 sunke. All rights reserved.
//

#import <Foundation/Foundation.h>


@interface NSString (SKMIME)

/**
 *  @summary  根据文件url 返回对应的MIMEType
 *
 *  @return MIMEType
 */
- (NSString *)sk_MIMEType;
/**
 *  @summary  根据文件url后缀 返回对应的MIMEType
 *
 *  @return MIMEType
 */
+ (NSString *)sk_MIMETypeForExtension:(NSString *)extension;
/**
 *  @summary  常见MIME集合
 *
 *  @return 常见MIME集合
 */
+ (NSDictionary *)sk_MIMEDict;

@end


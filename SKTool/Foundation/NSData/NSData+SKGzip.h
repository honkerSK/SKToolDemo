//
//  NSData+SKGzip.h
//  SKToolDemo
//
//  Created by sunke on 14-12-19.
//  Copyright © 2014 sunke. All rights reserved.
//


#import <Foundation/Foundation.h>


@interface NSData (SKGzip)
/**
 *  @summary  GZIP压缩
 *
 *  @param level 压缩级别
 *
 *  @return 压缩后的数据
 */
- (NSData *)sk_gzippedDataWithCompressionLevel:(float)level;

/**
 *  @summary  GZIP压缩 压缩级别 默认-1
 *
 *  @return 压缩后的数据
 */
- (NSData *)sk_gzippedData;

/**
 *  @summary  GZIP解压
 *
 *  @return 解压后数据
 */
- (NSData *)sk_gunzippedData;

- (BOOL)sk_isGzippedData;

@end


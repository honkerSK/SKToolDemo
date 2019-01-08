//
//  NSFileManager+SKPaths.m
//  SKToolDemo
//
//  Created by sunke on 14-12-18.
//  Copyright © 2014 sunke. All rights reserved.
//

#import "NSFileManager+SKPaths.h"
#include <sys/xattr.h>

@implementation NSFileManager (SKPaths)

+ (NSURL *)sk_URLForDirectory:(NSSearchPathDirectory)directory
{
    return [self.defaultManager URLsForDirectory:directory inDomains:NSUserDomainMask].lastObject;
}

+ (NSString *)sk_pathForDirectory:(NSSearchPathDirectory)directory
{
    return NSSearchPathForDirectoriesInDomains(directory, NSUserDomainMask, YES)[0];
}

+ (NSURL *)sk_documentsURL
{
    return [self sk_URLForDirectory:NSDocumentDirectory];
}

+ (NSString *)sk_documentsPath
{
    return [self sk_pathForDirectory:NSDocumentDirectory];
}

+ (NSURL *)sk_libraryURL
{
    return [self sk_URLForDirectory:NSLibraryDirectory];
}

+ (NSString *)sk_libraryPath
{
    return [self sk_pathForDirectory:NSLibraryDirectory];
}

+ (NSURL *)sk_cachesURL
{
    return [self sk_URLForDirectory:NSCachesDirectory];
}

+ (NSString *)sk_cachesPath
{
    return [self sk_pathForDirectory:NSCachesDirectory];
}

+ (BOOL)sk_addSkipBackupAttributeToFile:(NSString *)path
{
    return [[NSURL.alloc initFileURLWithPath:path] setResourceValue:@(YES) forKey:NSURLIsExcludedFromBackupKey error:nil];
}

+ (double)sk_availableDiskSpace
{
    NSDictionary *attributes = [self.defaultManager attributesOfFileSystemForPath:self.sk_documentsPath error:nil];
    
    return [attributes[NSFileSystemFreeSize] unsignedLongLongValue] / (double)0x100000;
}

@end

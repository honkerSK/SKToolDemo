//
//  NSData+SKzlib.h
//  SKToolDemo
//
//  Created by sunke on 14-12-19.
//  Copyright © 2014 sunke. All rights reserved.
//

#import <Foundation/Foundation.h>


@interface NSData (SKzlib)


/**
 ZLib error domain
 */
extern NSString *const SKZlibErrorDomain;
/**
 When a zlib error occurs, querying this key in the @p userInfo dictionary of the
 @p NSError object will return the underlying zlib error code.
 */
extern NSString *const SKZlibErrorInfoKey;

typedef NS_ENUM(NSUInteger, SKZlibErrorCode) {
    SKZlibErrorCodeFileTooLarge = 0,
    SKZlibErrorCodeDeflationError = 1,
    SKZlibErrorCodeInflationError = 2,
    SKZlibErrorCodeCouldNotCreateFileError = 3,
};

/**
 Apply zlib compression.
 
 @param error If an error occurs during compression, upon return contains an
 NSError object describing the problem.
 
 @returns An NSData instance containing the result of applying zlib
 compression to this instance.
 */
- (NSData *)sk_dataByDeflatingWithError:(NSError *__autoreleasing *)error;

/**
 Apply zlib decompression.
 
 @param error If an error occurs during decompression, upon return contains an
 NSError object describing the problem.
 
 @returns An NSData instance containing the result of applying zlib
 decompression to this instance.
 */
- (NSData *)sk_dataByInflatingWithError:(NSError *__autoreleasing *)error;

/**
 Apply zlib compression and write the result to a file at path
 
 @param path The path at which the file should be written
 
 @param error If an error occurs during compression, upon return contains an
 NSError object describing the problem.
 
 @returns @p YES if the compression succeeded; otherwise, @p NO.
 */
- (BOOL)sk_writeDeflatedToFile:(NSString *)path
                         error:(NSError *__autoreleasing *)error;

/**
 Apply zlib decompression and write the result to a file at path
 
 @param path The path at which the file should be written
 
 @param error If an error occurs during decompression, upon return contains an
 NSError object describing the problem.
 
 @returns @p YES if the compression succeeded; otherwise, @p NO.
 */
- (BOOL)sk_writeInflatedToFile:(NSString *)path
                         error:(NSError *__autoreleasing *)error;

@end


//
//  NSString+SKEncrypt.m
//  SKToolDemo
//
//  Created by sunke on 14-12-19.
//  Copyright © 2014 sunke. All rights reserved.
//

#import "NSString+SKEncrypt.h"
#import "NSData+SKEncrypt.h"
#import "NSData+SKBase64.h"

@implementation NSString (SKEncrypt)

-(NSString*)sk_encryptedWithAESUsingKey:(NSString*)key andIV:(NSData*)iv {
    NSData *encrypted = [[self dataUsingEncoding:NSUTF8StringEncoding] sk_encryptedWithAESUsingKey:key andIV:iv];
    NSString *encryptedString = [encrypted sk_base64EncodedString];
    
    return encryptedString;
}

- (NSString*)sk_decryptedWithAESUsingKey:(NSString*)key andIV:(NSData*)iv {
    NSData *decrypted = [[NSData sk_dataWithBase64EncodedString:self] sk_decryptedWithAESUsingKey:key andIV:iv];
    NSString *decryptedString = [[NSString alloc] initWithData:decrypted encoding:NSUTF8StringEncoding];
    
    return decryptedString;
}

- (NSString*)sk_encryptedWithDESUsingKey:(NSString*)key andIV:(NSData*)iv {
    NSData *encrypted = [[self dataUsingEncoding:NSUTF8StringEncoding] sk_encryptedWithDESUsingKey:key andIV:iv];
    NSString *encryptedString = [encrypted sk_base64EncodedString];
    
    return encryptedString;
}

- (NSString*)sk_decryptedWithDESUsingKey:(NSString*)key andIV:(NSData*)iv {
    NSData *decrypted = [[NSData sk_dataWithBase64EncodedString:self] sk_decryptedWithDESUsingKey:key andIV:iv];
    NSString *decryptedString = [[NSString alloc] initWithData:decrypted encoding:NSUTF8StringEncoding];
    
    return decryptedString;
}

- (NSString*)sk_encryptedWith3DESUsingKey:(NSString*)key andIV:(NSData*)iv {
    NSData *encrypted = [[self dataUsingEncoding:NSUTF8StringEncoding] sk_encryptedWith3DESUsingKey:key andIV:iv];
    NSString *encryptedString = [encrypted sk_base64EncodedString];
    
    return encryptedString;
}

- (NSString*)sk_decryptedWith3DESUsingKey:(NSString*)key andIV:(NSData*)iv {
    NSData *decrypted = [[NSData sk_dataWithBase64EncodedString:self] sk_decryptedWith3DESUsingKey:key andIV:iv];
    NSString *decryptedString = [[NSString alloc] initWithData:decrypted encoding:NSUTF8StringEncoding];
    
    return decryptedString;
}

@end

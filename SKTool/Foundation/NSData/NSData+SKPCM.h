//
//  NSData+SKPCM.h
//  SKToolDemo
//
//  Created by sunke on 14-12-19.
//  Copyright © 2014 sunke. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <AVFoundation/AVFoundation.h>
/*
 
 AudioStreamBasicDescription _format;
 _format.mFormatID = kAudioFormatLinearPCM;
 _format.mFormatFlags = kLinearPCMFormatFlagIsSignedInteger | kLinearPCMFormatFlagIsPacked;
 _format.mBitsPerChannel = 16;
 _format.mChannelsPerFrame = 1;
 _format.mBytesPerPacket = _format.mBytesPerFrame = (_format.mBitsPerChannel / 8) * _format.mChannelsPerFrame;
 _format.mFramesPerPacket = 1;
 _format.mSampleRate = 8000.0f;
 */


@interface NSData (SKPCM)
//self   raw audio data

/**
 *  format wav data
 *
 *  @param PCMFormat format of pcm
 *
 *  @return wav data
 */
- (NSData *)sk_wavDataWithPCMFormat:(AudioStreamBasicDescription)PCMFormat;
@end


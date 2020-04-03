//
//  KKFile.h
//  SlowDemo
//
//  Created by 沈逵逵 on 2020/3/31.
//  Copyright © 2020 ewingshen. All rights reserved.
//

#import <Foundation/NSString.h>
#import "KKMacros.h"

#ifndef KKFile_h
#define KKFile_h

typedef NS_ENUM(NSUInteger, KKFileReadResult) {
    KKFileReadResult_Succ,
    KKFileReadResult_EOF,
    KKFileReadResult_FileNotExists,
};

@protocol KKTextFileInterface <NSObject>

- (NSString *)readAll:(nullable KKFileReadResult *)code;

- (NSString *)readLine:(nullable KKFileReadResult *)code;

@end

DEFINE_IMP_OF_INTER(KKTextFile)

@protocol KKBlockFileInterface <NSObject>

- (int)readBytes:(nonnull void **)buff count:(int)expLen result:(KKFileReadResult *)code;

@end

#endif /* KKFile_h */

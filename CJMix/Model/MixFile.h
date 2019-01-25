//
//  MixFile.h
//  Mix
//
//  Created by ChenJie on 2019/1/20.
//  Copyright © 2019 ChenJie. All rights reserved.
//

#import <Foundation/Foundation.h>

typedef NS_ENUM(NSUInteger, MixFileType) {
    MixFileTypeUnknown,
    MixFileTypeFolder,
    MixFileTypeH,
    MixFileTypeM,
    MixFileTypeMM,
    MixFileTypeProject,
    MixFileTypePodFolder,
    MixFileTypeFramework
};


@interface MixFile : NSObject

@property (nonatomic , copy) NSString * path;

@property (nonatomic , copy) NSString * fileName;

@property (nonatomic , copy) NSString * data;

@property (nonatomic , assign) MixFileType fileType;

@property (nonatomic , copy) NSArray <MixFile *>* subFiles;

@end


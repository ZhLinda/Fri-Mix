//
//  DailyMutableProfile.h
//  GB_BlueSDK
//
//  Created by gxd on 16/12/28.
//  Copyright © 2016年 GoBrother. All rights reserved.
//

#import "PacketProfile.h"

@interface DailyMutableProfile : PacketProfile

- (instancetype)initWithMultiDate:(NSArray<NSDate *> *)dateArray;

@end
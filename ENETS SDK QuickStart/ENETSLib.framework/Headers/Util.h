//
//  Util.h
//  enetslib
//
//  Created by Heru Prasetia on 1/10/19.
//  Copyright © 2019 NETS. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface Util : NSObject

+(NSString *)getDeviceInfo;
+(BOOL)isConnected;
+(NSString *)hashShash256 :(NSString *)message secretKey :(NSString *)secretKey;
@end

NS_ASSUME_NONNULL_END

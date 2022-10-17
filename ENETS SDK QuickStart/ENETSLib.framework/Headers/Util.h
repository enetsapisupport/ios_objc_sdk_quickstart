//
//  Util.h
//  enetslib
//
//  Created by Heru Prasetia on 1/10/19.
//  Copyright © 2019 NETS. All rights reserved.
//

#import <Foundation/Foundation.h>
//#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface Util : NSObject

+(NSString *)getDeviceInfo;
+(BOOL)isConnected;
+(NSString *)hashShash256 :(NSString *)message secretKey :(NSString *)secretKey;
+(NSString *)firstAppSchemeUrl;
//+ (void)storeCertificate: (NSString *)certString withName: (NSString *)name;
//+ (void)saveImage:(UIImage *)image withName:(NSString *)name;
//+ (NSString *)loadImage:(NSString *)name;
@end

NS_ASSUME_NONNULL_END

//
//  ServiceType.h
//  enetslib
//
//  Created by Heru Prasetia on 30/9/19.
//  Copyright © 2019 NETS. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

struct EnumServiceType {
    NSString * const CC;
    NSString * const CC_AMEX;
    NSString * const CC_SGD;
    NSString * const CC_SGD_3DS;
    NSString * const CC_SGD_AMEX;
    NSString * const DD;
    NSString * const NETS2;
    NSString * const ALIPAY;
    NSString * const PAYLAH;
    NSString * const INVALID;
};

@interface ServiceType : NSObject {
    NSString *name;
}

@property (nonatomic, retain) NSString *name;

-(id)initWithString: (NSString *)rawValue;

@end

extern const struct EnumServiceType enumServiceType;

NS_ASSUME_NONNULL_END

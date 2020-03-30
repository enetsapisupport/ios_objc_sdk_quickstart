//
//  PaymentScheme.h
//  enetslib
//
//  Created by Heru Prasetia on 30/9/19.
//  Copyright © 2019 NETS. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "ServiceType.h"

NS_ASSUME_NONNULL_BEGIN

@interface PaymentScheme : NSObject {
    NSString *name;
    NSString *netsMid;
    NSString *paymtSvcId;
    ServiceType *serviceType;
}

@property (nonatomic, retain) NSString *name;
@property (nonatomic, retain) NSString *netsMid;
@property (nonatomic, retain) NSString *paymtSvcId;
@property (nonatomic, retain) ServiceType *serviceType;

-(id)initWithName :(NSString *)name withNetsMid :(NSString *)netsMid withPaymentServiceId :(NSString *)paymentSvcId withServiceType :(ServiceType *)serviceType;

@end

NS_ASSUME_NONNULL_END

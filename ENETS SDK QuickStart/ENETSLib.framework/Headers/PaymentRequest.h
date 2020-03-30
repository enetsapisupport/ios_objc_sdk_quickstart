//
//  PaymentRequest.h
//  enetslib
//
//  Created by Heru Prasetia on 30/9/19.
//  Copyright © 2019 NETS. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface PaymentRequest : NSObject {
    NSString *hmac;
    NSString *txnReq;
    
}

@property (nonatomic, retain) NSString *hmac;
@property (nonatomic, retain) NSString *txnReq;

-(id)initWithHmac :(NSString *)hmac txnReq :(NSString *)txnReq;

@end

NS_ASSUME_NONNULL_END

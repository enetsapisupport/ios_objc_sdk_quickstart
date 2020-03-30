//
//  PaymentResponse.h
//  enetslib
//
//  Created by Heru Prasetia on 30/9/19.
//  Copyright © 2019 NETS. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface PaymentResponse : NSObject

@end

@interface DebitCreditResponse : PaymentResponse {
    NSString *hmac;
    NSString *txnRes;
    NSString *keyId;
}

@property(nonatomic, retain) NSString *hmac;
@property(nonatomic, retain) NSString *txnRes;
@property(nonatomic, retain) NSString *keyId;

-(id)initWithHmac :(NSString *)hmac withTxnRes :(NSString *)txnRes withKeyId :(NSString *)keyId;

@end

@interface NonDebitCreditResponse : PaymentResponse {
    NSString *txn_Status;
}

@property(nonatomic, retain) NSString *txn_Status;

-(id)initWithTxnStatus :(NSString *)txnStatus;

@end

NS_ASSUME_NONNULL_END

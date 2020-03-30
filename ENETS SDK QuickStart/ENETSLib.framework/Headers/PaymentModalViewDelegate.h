//
//  PaymentModalViewDelegate.h
//  enetslib
//
//  Created by Jason Loh on 17/1/20.
//  Copyright © 2020 NETS. All rights reserved.
//
#import <UIKit/UIKit.h>
#import "PaymentScheme.h"
#import "NETSError.h"
#import "PaymentResponse.h"

@protocol PaymentModalViewDelegate <NSObject>
-(void) onPaymentSelected :(PaymentScheme *)type;
-(void) onPaymentSchemeFetched :(NETSError *)error;

-(void) onPaymentResult :(PaymentResponse *)result withError :(NETSError *)error;
@end

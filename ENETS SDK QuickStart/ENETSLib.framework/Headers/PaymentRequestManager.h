//
//  PaymentRequestManager.h
//  enetslib
//
//  Created by Heru Prasetia on 1/10/19.
//  Copyright © 2019 NETS. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import "PaymentResponse.h"
#import "NETSError.h"
#import "PaymentModalViewDelegate.h"
#import "PaymentRequest.h"

NS_ASSUME_NONNULL_BEGIN

/// Payment callback from eNETS SDK
@protocol PaymentRequestDelegate <NSObject>

-(void)onResult :(PaymentResponse *)response;
-(void)onFailure :(NETSError *)err;

@end
 
/// Payment request manager to invoke ENETS SDK
@interface PaymentRequestManager : NSObject <PaymentModalViewDelegate> {
    
    UIViewController *viewController;
    id <PaymentRequestDelegate> paymentDelegate;
    UIStoryboard *storyboard;
    NSMutableArray *availableSchemes;
    
}

@property (nonatomic, retain) UIViewController *viewController;
@property (nonatomic, retain) id <PaymentRequestDelegate> paymentDelegate;
@property (nonatomic, retain) UIStoryboard *storyboard;
@property (nonatomic, retain) NSMutableArray *availableSchemes;

-(id)init;
-(void)setLogEnabled :(BOOL)enabled;
-(void)sendPaymentRequest :(NSString *)apiKey paymentRequest :(PaymentRequest *)paymentRequest viewController :(UIViewController *)viewController;
-(void)setQrWalletAppDisplayDetails :(NSString *)qrAppTitle qrAppLogo :(UIImage * __nullable)qrAppLogo;
-(void)sendPaymentRequestWithTargetQrWalletWithApiKey :(NSString *)apiKey paymentRequest :(PaymentRequest *)paymentRequest qrWalletAppBundle :(NSString *)qrWalletAppBundle qrWalletAppScheme :(NSString *)qrWalletAppScheme viewController :(UIViewController *)viewController;

+(BOOL)handleOpenURL :(id <UIApplicationDelegate> )appDelegate url :(NSURL *)url;

@end

NS_ASSUME_NONNULL_END

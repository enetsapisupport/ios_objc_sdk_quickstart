//
//  NETSError.h
//  enetslib
//
//  Created by Heru Prasetia on 30/9/19.
//  Copyright © 2019 NETS. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface NETSError : NSObject {
    NSString *responseCode;
    NSString *actionCode;
}

@property (nonatomic, retain) NSString *responseCode;
@property (nonatomic, retain) NSString *actionCode;

-(id)initWithResponseCode :(NSString *)responseCode withActionCode :(NSString *)actionCode;
@end

NS_ASSUME_NONNULL_END

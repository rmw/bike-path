//
//  ErrorMessage.h
//  bikepath
//
//  Created by Molly Huerster on 8/20/14.
//  Copyright (c) 2014 Bike Path. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface ErrorMessage : NSObject

+ (void)renderErrorMessage:(NSString*) messageTitle
                 cancelButtonTitle:(NSString*) buttonTitle
                             error:(NSError*) error;


@end

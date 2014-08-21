//
//  ErrorMessage.m
//  bikepath
//
//  Created by Molly Huerster on 8/20/14.
//  Copyright (c) 2014 Bike Path. All rights reserved.
//

#import "ErrorMessage.h"

@implementation ErrorMessage

+ (void)renderErrorMessage:(NSString*) messageTitle
         cancelButtonTitle:(NSString*) buttonTitle
                     error:(NSError*) error {
    UIAlertView *alert = [[UIAlertView alloc] initWithTitle:messageTitle
                                                    message:error.localizedDescription
                                                   delegate:nil
                                          cancelButtonTitle:buttonTitle
                                          otherButtonTitles:nil, nil];
    [alert show];
}
@end

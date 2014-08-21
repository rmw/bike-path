//
//  SenderViewController.h
//  bikepath
//
//  Created by Vivek M George on 8/17/14.
//  Copyright (c) 2014 Bike Path. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface SenderViewController : UIViewController {
    IBOutlet UITextField *textBox;
}

-(IBAction) openMaps:(id)sender;
-(IBAction) openYoutube:(id)sender;
-(IBAction) openReceiverApp:(id)sender;

@property(nonatomic, retain) IBOutlet UITextField *textBox;

@end

//
//  MDDirectionService.h
//  bikepath
//
//  Created by Armen Vartan on 8/16/14.
//  Copyright (c) 2014 Bike Path. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface MDDirectionService : NSObject

- (void)setDirectionsQuery:(NSDictionary *)object withSelector:(SEL)selector
              withDelegate:(id)delegate;
- (void)retrieveDirections:(SEL)sel withDelegate:(id)delegate;
- (void)fetchedData:(NSData *)data withSelector:(SEL)selector
       withDelegate:(id)delegate;
@end

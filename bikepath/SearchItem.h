//
//  SearchItem.h
//  bikepath
//
//  Created by Farheen Malik on 8/15/14.
//  Copyright (c) 2014 Bike Path. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <MapKit/MapKit.h>

@interface SearchItem : NSObject

@property NSString *searchQuery;
@property CLLocationDegrees lati;
@property CLLocationDegrees longi;
@property CLLocationCoordinate2D position;
@property NSString *address;
@property (readonly) NSDate *creationDate;

@end

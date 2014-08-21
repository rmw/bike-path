//
//  StationFinder.m
//  bikepath
//
//  Created by Vivek M George on 8/18/14.
//  Copyright (c) 2014 Bike Path. All rights reserved.
//

#import "StationFinder.h"
#import <CoreLocation/CoreLocation.h>

@implementation StationFinder

+ (NSDictionary *) findClosestStation: (NSArray *) stations
                             location: (CLLocation *) currentLocation {
    
    CLLocationDistance smallestDistance = DBL_MAX;
    NSDictionary *closestStation;
    
    for(NSDictionary *station in stations) {
        NSString *stationLatitude  = [station objectForKey:@"latitude"];
        NSString *stationLongitude = [station objectForKey:@"longitude"];
        
        CLLocation *bikeStop = [[CLLocation alloc] initWithLatitude:[stationLatitude doubleValue]
                                                          longitude:[stationLongitude doubleValue]];
        
        CLLocationDistance distance = [currentLocation distanceFromLocation:bikeStop];
            
        if (distance < smallestDistance) {
            smallestDistance = distance;
            closestStation   = station;
        }
    }
    return closestStation;
}

@end
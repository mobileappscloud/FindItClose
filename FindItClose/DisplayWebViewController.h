//
//  DisplayWebViewController.h
//  FindItClose
//
//  Created by iMac on 7/13/14.
//  Copyright (c) 2014 CongenialApps. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <MapKit/MapKit.h>
#import <CoreLocation/CoreLocation.h>
#import "MapPoint.h"

#define kGOOGLE_API_KEY @"AIzaSyAcJgYblJd1aNT_KDcQqH8f54BvgT4eeHE"
#define kBgQueue dispatch_get_global_queue(DISPATCH_QUEUE_PRIORITY_DEFAULT, 0)


@interface DisplayWebViewController : UIViewController <MKMapViewDelegate, CLLocationManagerDelegate>
{
    CLLocationManager *locationManager;
    
    CLLocationCoordinate2D currentCentre;
    int currenDist;
    BOOL firstLaunch;
}

@property (weak, nonatomic) IBOutlet MKMapView *mapView;
@property (nonatomic, strong) NSString *tappedString;
@end

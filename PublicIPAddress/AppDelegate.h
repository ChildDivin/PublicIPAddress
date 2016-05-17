//
//  AppDelegate.h
//  PublicIPAddress
//
//  Created by Tops on 15/09/14.
//  Copyright (c) 2014 Tops. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "STUNClient.h"
#import "GCDAsyncUdpSocket.h"

@interface AppDelegate : UIResponder <UIApplicationDelegate,STUNClientDelegate>
{
    STUNClient *stunClient;
    GCDAsyncUdpSocket *udpSocket;
}

@property (strong, nonatomic) UIWindow *window;

@end

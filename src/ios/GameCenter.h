//
//  GameCenter.h
//  Copyright (c) 2013 Lee Crossley - http://ilee.co.uk
//

#import "Foundation/Foundation.h"
#import "Cordova/CDV.h"
#import "GameCenter.h"
#import "GameKit/GameKit.h"

@interface GameCenter : CDVPlugin

- (void) auth:(CDVInvokedUrlCommand*)command;
- (void) submitScore:(CDVInvokedUrlCommand*)command;

@end
//
//  OMHClipboardController.h
//  Clyppan
//
//  Created by Ole Morten Halvorsen on 4/3/08.
//  Copyright 2008 omh.cc. All rights reserved.
//

#import <Cocoa/Cocoa.h>


// How often we should check for Pasteboard changes.
extern const float PasteboardPullInterval; 


@interface OMHClipboardController: NSObject 
{  
    id delegate;
    
    @protected
        NSTimer *timer;
        NSInteger previousChangeCount;
}

@property( nonatomic ) id delegate;

+ (OMHClipboardController *)sharedController;
- (void) createTimer;


@end
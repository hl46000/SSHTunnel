//Copyright (C) 2008  Antoine Mercadal
//
//This program is free software; you can redistribute it and/or
//modify it under the terms of the GNU General Public License
//as published by the Free Software Foundation; either version 2
//of the License, or (at your option) any later version.
//
//This program is distributed in the hope that it will be useful,
//but WITHOUT ANY WARRANTY; without even the implied warranty of
//MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
//GNU General Public License for more details.
//
//You should have received a copy of the GNU General Public License
//along with this program; if not, write to the Free Software
//Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301, USA.

#import <Cocoa/Cocoa.h>
#import "AMBaseViewController.h"
#import "AMSession.h"

@interface AMSessionViewController :AMBaseViewController {
	
	IBOutlet NSArrayController		*sessionsArrayController;
	IBOutlet NSBox					*tunnelConfigBox;
	IBOutlet NSView					*outputTunnelConfigView;
	IBOutlet NSView					*inputTunnelConfigView;

	NSMutableArray					*sessions;
	NSString						*sessionSavePath;
	NSTimer							*pingDelayer;
}
@property(readwrite, assign)	NSMutableArray		*sessions;
@property(readwrite, assign)	NSArrayController	*sessionsArrayController;

- (void) createObservers;
- (void) performSaveProcess:(NSTimer *)theTimer;
- (void) saveState;

- (AMSession*) getSelectedSession;

@end

/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import "assistivetouchd-Structs.h"

@class NSLock, NSThread, NSMutableArray, SCRCThread;

__attribute__((visibility("hidden")))
@interface HNDEventManager {
	SCRCThread* _eventDispatchThread;
	NSMutableArray* _eventsToDispatch;
	NSMutableArray* _eventsToMatch;
	CFRunLoopSourceRef _source;
	CFRunLoopRef _runLoop;
	NSLock* _eventLock;
	BOOL _isCapturingEvents;
	BOOL _nubbitMoving;
	NSString* _axSpringBoardCallbackIdentifier;
	NSString* _axEventListenerCallbackIdentifier;
	NSThread* _ioFilterThread;
	IOHIDEventSystemClientRef _ioSystemFilterClient;
	IOHIDEventSystemClientRef _ioSystemPostBackClient;
	IOHIDEventSystemClientRef _ioSystemClient;
}
@property(readonly, assign, nonatomic) IOHIDEventSystemClientRef ioSystemClient;
@property(assign, nonatomic) BOOL isCapturingEvents;
+(id)sharedManager;
+(void)initialize;
-(void)performHardwareButton:(int)button state:(int)state;
-(void)notifyUserEventOccurred;
-(void)performCancel;
-(void)performUpWithFingers:(id)fingers;
-(void)setAllowUpEventsToPassthrough:(BOOL)passthrough;
-(void)performMoveWithFingers:(id)fingers;
-(void)performDownWithFingers:(id)fingers;
-(void)_tripleClick;
-(void)_toggleVoiceControl;
-(void)_toggleSiri;
-(void)_performPressAndHoldMenu:(float)menu;
-(void)_toggleAppSwitcher;
-(void)_takeScreenshot;
-(void)openCreateCustomGesture;
-(BOOL)orientationLocked;
-(BOOL)sideSwitchUsedForOrientation;
-(void)_sendHandEvent:(int)event location:(id)location;
-(void)_sendDeviceOrientationChange:(int)change;
-(void)_sendButtonEvent:(int)event;
-(void)_sendGSEvent:(XXStruct_uk_lJC*)event;
-(void)_initializeSystemWideServerPort;
-(void)setCaptureEvents:(BOOL)events;
-(void)_disableIOFilter;
-(void)_registerIOHIDUsage;
-(void)_startIOThread;
-(void)_unregisterIOFilter;
-(void)_handleIOHIDEvent:(IOHIDEventRef)event;
-(void)wakeDeviceFromSleepIfNecessary;
-(void)setMenuVisible:(BOOL)visible;
-(BOOL)isVoiceControlRunning;
-(float)volumeLevel;
-(void)setNubbitMoving:(BOOL)moving;
-(void)manipulateDimTimer:(BOOL)timer;
-(void)_initializeASTNotificationCenter;
-(void)mediaControlsChanged:(id)changed userInfo:(id)info;
-(void)keyboardStatusChanged:(id)changed userInfo:(id)info;
-(void)receivedGSEventFromTap:(XXStruct_uk_lJC*)tap;
-(void)_restartConnectionToSystemServer;
-(int)deviceOrientation;
-(void)_startThread;
-(void)_processQueue;
-(void)_resetEventManager;
-(void)resetEventManager;
-(void)_initializeSpringBoardItems;
-(void)ringerSwitchChanged;
-(void)substationalTransitionOccurred;
-(void)systemServerRestarted;
-(id)init;
@end


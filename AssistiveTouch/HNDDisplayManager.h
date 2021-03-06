/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import "HNDViewDelegateControl.h"
#import "HNDWindowDelegateProtocol.h"
#import "assistivetouchd-Structs.h"

@class HNDFingerView, NSMutableArray, AXTimer, UIView, HNDRocker, HNDPinchChainView, HNDView, HNDWindow;

__attribute__((visibility("hidden")))
@interface HNDDisplayManager <HNDViewDelegateControl, HNDWindowDelegateProtocol> {
	AXTimer* _idleTimer;
	AXTimer* _longIdleTimer;
	HNDWindow* _window;
	HNDWindow* _ignoredWindow;
	HNDRocker* _rocker;
	UIView* _contentView;
	UIView* _ignoredContentView;
	HNDView* _rockerDismiss;
	HNDView* _multiTouchBackgound;
	CGPoint _currentPoint;
	CGPoint _menuPoint;
	CGPoint _previousMenuPoint;
	double _menuOpenTime;
	CGPoint _menuOpenDistance;
	CGPoint _pointBeforePinch;
	BOOL _menuDownWillFireAutomaticUp;
	CGRect _screenBounds;
	HNDFingerView* _pinchFinger1;
	HNDFingerView* _pinchFinger2;
	HNDPinchChainView* _pinchChain;
	int _orientation;
	NSMutableArray* _fingers;
	BOOL _showingHoverOverMenu;
	BOOL _isPressedDown;
	BOOL _openedMenuOnDown;
	BOOL _inPinchMode;
	double _nubbitTouchToUpTimeLatency;
	double _nubbitTouchDownTime;
	SCRCMathAverageValue _nubbitDistanceTracking;
	SCRCMathAverageValue _nubbitAngleTracking;
	float _nubbitVelocity;
	BOOL _nubbitMoving;
	CGPoint _downPoint;
	CGPoint _movePoint;
	CGPoint _nubbitStartDownPoint;
	HNDView* _downView;
	int _lastHandType;
	CGPoint _preKeyboardMovePosition;
	BOOL _visualsHidden;
}
@property(assign, nonatomic) BOOL showingHoverOverMenu;
+(id)sharedManager;
+(void)initialize;
-(void)viewPressed:(id)pressed;
-(void)volumeChanged;
-(BOOL)inNubbitMode;
-(void)updateRingerSwitch;
-(void)deviceCountChanged:(int)changed;
-(void)_deviceCountChanged:(id)changed;
-(void)updateMenuStyle;
-(void)restart;
-(void)resetPinchChain:(CGPoint)chain;
-(void)showPinchFingers:(BOOL)fingers withPoint:(CGPoint)point;
-(void)updatePinchChain;
-(void)_updatePinchChainFrame;
-(void)removeMultiFingers:(BOOL)fingers animateToPoint:(CGPoint)point;
-(void)removeMultiFingers:(BOOL)fingers;
-(BOOL)isMenuVisible;
-(void)showMenu:(BOOL)menu;
-(void)hideVisuals:(BOOL)visuals animate:(BOOL)animate;
-(BOOL)visualsHidden;
-(BOOL)acceptsHitTest:(CGPoint)test;
-(void)showPrimaryFinger:(BOOL)finger location:(CGPoint)location;
-(void)showPrimaryFinger:(BOOL)finger active:(BOOL)active location:(CGPoint)location;
-(CGPoint)_menuPointForFingerLayout;
-(void)adjustMultiFingersToScreenCenter;
-(CGPoint)standardCentroidForMultifingers:(CGPoint)multifingers;
-(CGPoint)absoluteCentroidForMultifingers:(CGPoint)multifingers;
-(CGRect)rotatedScreenBounds;
-(void)setFingersVisible:(BOOL)visible animated:(BOOL)animated;
-(void)performPress:(int)press type:(int)type;
-(BOOL)inPinchMode;
-(void)_handlePinchPress:(BOOL)press;
-(void)_multiFingers:(BOOL)fingers animated:(BOOL)animated;
-(void)cancelImplodeAnimation;
-(void)showCircleMenu:(BOOL)menu;
-(void)fingerFinishedImplosion:(id)implosion;
-(void)_displayLinkFired:(id)fired;
-(CGRect)screenBounds;
-(CGPoint)point;
-(CGPoint)screenPoint;
-(CGPoint)rotatedScreenPoint;
-(CGPoint)hoverMoved:(CGPoint)moved;
-(BOOL)initialDownMenuCanTransitionToPressDown;
-(BOOL)initialMenuDownHasFinished;
-(void)setOrientation:(int)orientation;
-(int)isFingerInCorner;
-(float)_rotationDegreesForOrientation:(int)orientation;
-(void)modifyPinch:(BOOL)pinch angle:(float)angle movement:(CGPoint)movement;
-(void)modifyRealPinch:(CGPoint)pinch startPoint:(CGPoint)point finger:(id)finger;
-(CGPoint)modifyFakePinch:(CGPoint)pinch startPoint:(CGPoint)point;
-(BOOL)areFramesWithinInBounds:(int)bounds frames:(CGRect)frames;
-(void)_updateCurrentPoint:(CGPoint)point;
-(CGPoint)normalizedPointDifference:(CGPoint)difference;
-(void)_startIdleTimer;
-(void)_idleTimerFired;
-(void)activateDisplayItems;
-(void)_longIdleTimerFired;
-(void)showMultiFingersWithPoints:(id)points;
-(void)moveFinger:(int)finger toPoint:(CGPoint)point;
-(BOOL)canMoveFinger:(int)finger toPoint:(CGPoint)point;
-(void)addFinger:(CGPoint)finger;
-(void)addFinger:(CGPoint)finger active:(BOOL)active;
-(id)multiFingers;
-(id)fingerViews;
-(CGPoint)convertPointFromOrientation:(CGPoint)orientation;
-(CGPoint)convertPointToOrientation:(CGPoint)orientation;
-(BOOL)handleRealEvent:(GSEventRef)event;
-(id)viewAtPoint:(CGPoint)point;
-(id)viewAtPoint:(CGPoint)point downPoint:(CGPoint*)point2 window:(id)window;
-(void)_handleNubbitMove:(CGPoint)move;
-(void)keyboardVisible:(BOOL)visible withFrame:(CGRect)frame;
-(void)_moveNubbitAboveKeyboard:(CGRect)keyboard;
-(BOOL)_nubbitIsOverKeyboard:(CGRect)keyboard;
-(void)_repositionNubbitAfterLift:(CGPoint)lift;
-(void)_moveNubbitToPosition:(CGPoint)position forKeyboard:(BOOL)keyboard;
-(void)_moveNubbitToPosition:(CGPoint)position;
-(CGPoint)_validateNubbitPosition:(CGPoint)position forKeyboard:(BOOL)keyboard;
-(CGPoint)nubbitPositionForFlick:(CGPoint)flick;
-(int)_angleForDegrees:(float)degrees;
-(CGPoint)closestNubbitPositionForPoint:(CGPoint)point;
-(int)fingerCount;
-(void)setMultiTouchToolBackgroundEnabled:(BOOL)enabled;
-(BOOL)multiTouchToolBackgroundEnabled;
-(void)_hoverMultiFingers:(CGPoint)fingers;
-(void)_hoverFingerRecorder:(CGPoint)recorder;
-(void)dealloc;
-(void)cleanup;
-(void)initializeDisplay;
-(id)init;
@end


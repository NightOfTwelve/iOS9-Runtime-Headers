/* Generated by RuntimeBrowser
   Image: /Applications/Xcode-beta.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIKeyCommandDiscoverabilityHUD : NSObject {
    NSTimer * _HUDPopTimer;
    BOOL  _commandKeyIsDown;
    _UIKeyCommandDiscoverabilityHUDWindow * _window;
}

+ (id)sharedKeyCommandDiscoverabilityHUD;

- (void).cxx_destruct;
- (void)_HUDPopTimerFired:(id)arg1;
- (void)_applicationWillResignActive;
- (void)_dismissHUD;
- (id)_performableKeyCommandsWithResponder:(id)arg1;
- (void)_presentHUDWithKeyCommands:(id)arg1;
- (void)_scheduleHUDPresentation;
- (void)dealloc;
- (void)handlePhysicalKeyboardEvent:(id)arg1;

@end

/* Generated by RuntimeBrowser
   Image: /Applications/Xcode-beta.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIWheelEvent : UIEvent {
    int  _recentScrollDistance;
    NSMutableArray * _recentScrollEvents;
    int  lastSubtype;
}

- (void).cxx_destruct;
- (BOOL)_canHaveVelocity;
- (void)_sendEventToResponder:(id)arg1;
- (void)_setHIDEvent:(struct __IOHIDEvent { }*)arg1;
- (float)_wheelVelocity;
- (int)subtype;
- (int)type;

@end
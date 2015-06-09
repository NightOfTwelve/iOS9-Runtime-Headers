/* Generated by RuntimeBrowser
   Image: /Applications/Xcode-beta.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIMenuItem : NSObject {
    SEL  _action;
    BOOL  _dontDismiss;
    NSString * _title;
}

@property (nonatomic) SEL action;
@property (nonatomic) BOOL dontDismiss;
@property (nonatomic, copy) NSString *title;

- (void).cxx_destruct;
- (SEL)action;
- (BOOL)dontDismiss;
- (id)init;
- (id)initWithTitle:(id)arg1 action:(SEL)arg2;
- (void)setAction:(SEL)arg1;
- (void)setDontDismiss:(BOOL)arg1;
- (void)setTitle:(id)arg1;
- (id)title;

@end
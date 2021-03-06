/* Generated by RuntimeBrowser
   Image: /Applications/Xcode-beta.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface _UIFocusPointToPointScrollAnimator : NSObject <_UIFocusScrollAnimator> {
    float  _defaultConvergenceRate;
    CAMediaTimingFunction * _fancyTimingFunction;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) float defaultConvergenceRate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (nonatomic, readonly) BOOL requiresExtendingScrollViewVisibleBounds;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (float)_animationDurationForDistance:(float)arg1 convergenceRate:(float)arg2;
- (void)cancelPeekAdjustmentForScrollView:(id)arg1 performRollback:(BOOL)arg2;
- (float)defaultConvergenceRate;
- (id)init;
- (BOOL)requiresExtendingScrollViewVisibleBounds;
- (void)setDefaultConvergenceRate:(float)arg1;
- (void)setPeekOffsetAdjustment:(struct CGPoint { float x1; float x2; })arg1 forScrollView:(id)arg2;
- (void)setTargetContentOffset:(struct CGPoint { float x1; float x2; })arg1 forScrollView:(id)arg2 convergenceRate:(float)arg3 completion:(id /* block */)arg4;

@end

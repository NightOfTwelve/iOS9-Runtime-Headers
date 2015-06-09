/* Generated by RuntimeBrowser
   Image: /Applications/Xcode-beta.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface AVPlayerLayer : CALayer {
    AVPlayerLayerInternal * _playerLayer;
}

@property (nonatomic, copy) NSDictionary *pixelBufferAttributes;
@property (nonatomic, retain) AVPlayer *player;
@property (getter=isReadyForDisplay, nonatomic, readonly) BOOL readyForDisplay;
@property (copy) NSString *videoGravity;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; } videoRect;

+ (void)_swapVideoLayersBetweenPlayerLayer:(id)arg1 andPlayerLayer:(id)arg2;
+ (id)keyPathsForValuesAffectingVideoRect;
+ (id)playerLayerWithPlayer:(id)arg1;

- (void)_addAnimationsForClosedCaptionLayer:(id)arg1 gravity:(id)arg2;
- (void)_addAnimationsForMaskLayer:(id)arg1;
- (void)_addAnimationsForVideoLayer:(id)arg1 size:(struct CGSize { float x1; float x2; })arg2 gravity:(id)arg3;
- (id)_closedCaptionLayer;
- (void)_configurePlayerWhenEnteringPIP;
- (void)_configurePlayerWhenLeavingPIP;
- (void)_forBoundsAnimations:(id)arg1 applyBlock:(id /* block */)arg2;
- (void)_forceLayout;
- (void)_notifyPlayerOfDisplaySize;
- (void)_setHasPlayerToObserve:(int)arg1 andShouldObserveIt:(int)arg2;
- (void)_setItem:(id)arg1 readyForDisplay:(BOOL)arg2;
- (void)_setSubtitleGravity:(id)arg1;
- (void)_setVideoLayer:(id)arg1;
- (void)_setwillManageVideoLayerAsSwappedLayer:(BOOL)arg1;
- (id)_subtitleGravity;
- (id)_subtitleLayer;
- (id)_transformToAbsoluteAnimationOfBounds:(id)arg1;
- (void)_updatePresentationSize:(struct CGSize { float x1; float x2; })arg1 forceUpdate:(BOOL)arg2;
- (id)_videoLayer;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_videoRectForBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (BOOL)_willManageVideoLayerAsSwappedLayer;
- (void)addAnimation:(id)arg1 forKey:(id)arg2;
- (BOOL)canEnterPIPMode;
- (void)dealloc;
- (void)enterPIPModeRedirectingVideoToLayer:(id)arg1;
- (void)finalize;
- (id)init;
- (id)initWithLayer:(id)arg1;
- (BOOL)isOverscanSubtitleSupportEnabled;
- (BOOL)isPIPModeEnabled;
- (BOOL)isReadyForDisplay;
- (void)layerDidBecomeVisible:(BOOL)arg1;
- (void)leavePIPMode;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (id)pixelBufferAttributes;
- (id)player;
- (void)removeAllAnimations;
- (void)removeAnimationForKey:(id)arg1;
- (void)setBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setContentsScale:(float)arg1;
- (void)setOverscanSubtitleSupportEnabled:(BOOL)arg1;
- (void)setPIPModeEnabled:(BOOL)arg1;
- (void)setPixelBufferAttributes:(id)arg1;
- (void)setPlayer:(id)arg1;
- (void)setVideoGravity:(id)arg1;
- (id)videoGravity;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })videoRect;

@end
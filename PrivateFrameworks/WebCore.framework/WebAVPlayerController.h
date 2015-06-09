/* Generated by RuntimeBrowser
   Image: /Applications/Xcode-beta.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

@interface WebAVPlayerController : NSObject <AVPlayerViewControllerDelegate> {
    NSArray * _audioMediaSelectionOptions;
    BOOL  _canPause;
    BOOL  _canPlay;
    BOOL  _canScanBackward;
    BOOL  _canSeek;
    BOOL  _canTogglePlayback;
    struct CGSize { 
        float width; 
        float height; 
    }  _contentDimensions;
    double  _contentDuration;
    double  _contentDurationWithinEndTimes;
    WebAVMediaSelectionOption * _currentAudioMediaSelectionOption;
    WebAVMediaSelectionOption * _currentLegibleMediaSelectionOption;
    struct WebVideoFullscreenModel { int (**x1)(); } * _delegate;
    BOOL  _externalPlaybackActive;
    NSString * _externalPlaybackAirPlayDeviceLocalizedName;
    int  _externalPlaybackType;
    struct WebVideoFullscreenInterfaceAVKit { int (**x1)(); struct atomic<int> { int x_2_1_1; } x2; struct RetainPtr<WebAVPlayerController> { void *x_3_1_1; } x3; struct RetainPtr<AVPlayerViewController> { void *x_4_1_1; } x4; struct RetainPtr<CALayer> { void *x_5_1_1; } x5; struct RetainPtr<WebAVVideoLayer> { void *x_6_1_1; } x6; struct RetainPtr<WebCALayerHostWrapper> { void *x_7_1_1; } x7; struct WebVideoFullscreenModel {} *x8; struct WebVideoFullscreenChangeObserver {} *x9; struct RetainPtr<UIWindow> { void *x_10_1_1; } x10; struct RetainPtr<UIViewController> { void *x_11_1_1; } x11; struct RetainPtr<UIView> { void *x_12_1_1; } x12; struct RetainPtr<UIWindow> { void *x_13_1_1; } x13; unsigned int x14; struct function<void (bool)>={type=[12C] {} x15; struct __base<void (bool)> {} *x16; } * _fullscreenInterface;
    BOOL  _hasEnabledAudio;
    BOOL  _hasEnabledVideo;
    NSArray * _legibleMediaSelectionOptions;
    NSArray * _loadedTimeRanges;
    double  _maxTime;
    double  _minTime;
    AVPlayerController * _playerControllerProxy;
    double  _rate;
    NSArray * _seekableTimeRanges;
    int  _status;
    AVValueTiming * _timing;
}

@property (retain) NSArray *audioMediaSelectionOptions;
@property BOOL canPause;
@property BOOL canPlay;
@property BOOL canScanBackward;
@property (readonly) BOOL canScanForward;
@property BOOL canSeek;
@property (readonly) BOOL canSeekToBeginning;
@property (readonly) BOOL canSeekToEnd;
@property BOOL canTogglePlayback;
@property struct CGSize { float x1; float x2; } contentDimensions;
@property double contentDuration;
@property double contentDurationWithinEndTimes;
@property (retain) WebAVMediaSelectionOption *currentAudioMediaSelectionOption;
@property (retain) WebAVMediaSelectionOption *currentLegibleMediaSelectionOption;
@property (readonly, copy) NSString *debugDescription;
@property struct WebVideoFullscreenModel { int (**x1)(); }*delegate;
@property (readonly, copy) NSString *description;
@property (getter=isExternalPlaybackActive) BOOL externalPlaybackActive;
@property (retain) NSString *externalPlaybackAirPlayDeviceLocalizedName;
@property int externalPlaybackType;
@property struct WebVideoFullscreenInterfaceAVKit { int (**x1)(); struct atomic<int> { int x_2_1_1; } x2; struct RetainPtr<WebAVPlayerController> { void *x_3_1_1; } x3; struct RetainPtr<AVPlayerViewController> { void *x_4_1_1; } x4; struct RetainPtr<CALayer> { void *x_5_1_1; } x5; struct RetainPtr<WebAVVideoLayer> { void *x_6_1_1; } x6; struct RetainPtr<WebCALayerHostWrapper> { void *x_7_1_1; } x7; struct WebVideoFullscreenModel {} *x8; struct WebVideoFullscreenChangeObserver {} *x9; struct RetainPtr<UIWindow> { void *x_10_1_1; } x10; struct RetainPtr<UIViewController> { void *x_11_1_1; } x11; struct RetainPtr<UIView> { void *x_12_1_1; } x12; struct RetainPtr<UIWindow> { void *x_13_1_1; } x13; unsigned int x14; struct function<void (bool)>={type=[12C] {} x15; struct __base<void (bool)> {} *x16; }*fullscreenInterface;
@property (readonly) BOOL hasAudioMediaSelectionOptions;
@property BOOL hasEnabledAudio;
@property BOOL hasEnabledVideo;
@property (readonly) BOOL hasLegibleMediaSelectionOptions;
@property (readonly) BOOL hasMediaSelectionOptions;
@property (readonly) unsigned int hash;
@property (retain) NSArray *legibleMediaSelectionOptions;
@property (retain) NSArray *loadedTimeRanges;
@property double maxTime;
@property double minTime;
@property (retain) AVPlayerController *playerControllerProxy;
@property (getter=isPlaying) BOOL playing;
@property (getter=isPlayingOnExternalScreen, readonly) BOOL playingOnExternalScreen;
@property double rate;
@property (retain) NSArray *seekableTimeRanges;
@property int status;
@property (readonly) Class superclass;
@property (retain) AVValueTiming *timing;

+ (id)keyPathsForValuesAffectingCanScanForward;
+ (id)keyPathsForValuesAffectingCanSeekToBeginning;
+ (id)keyPathsForValuesAffectingCanSeekToEnd;
+ (id)keyPathsForValuesAffectingHasAudioMediaSelectionOptions;
+ (id)keyPathsForValuesAffectingHasLegibleMediaSelectionOptions;
+ (id)keyPathsForValuesAffectingHasLiveStreamingContent;
+ (id)keyPathsForValuesAffectingHasMediaSelectionOptions;
+ (id)keyPathsForValuesAffectingPlaying;
+ (id)keyPathsForValuesAffectingPlayingOnExternalScreen;

- (id)audioMediaSelectionOptions;
- (void)beginScanningBackward:(id)arg1;
- (void)beginScanningForward:(id)arg1;
- (void)beginScrubbing:(id)arg1;
- (BOOL)canPause;
- (BOOL)canPlay;
- (BOOL)canScanBackward;
- (BOOL)canScanForward;
- (BOOL)canSeek;
- (BOOL)canSeekToBeginning;
- (BOOL)canSeekToEnd;
- (BOOL)canTogglePlayback;
- (struct CGSize { float x1; float x2; })contentDimensions;
- (double)contentDuration;
- (double)contentDurationWithinEndTimes;
- (id)currentAudioMediaSelectionOption;
- (id)currentLegibleMediaSelectionOption;
- (void)dealloc;
- (struct WebVideoFullscreenModel { int (**x1)(); }*)delegate;
- (void)endScanningBackward:(id)arg1;
- (void)endScanningForward:(id)arg1;
- (void)endScrubbing:(id)arg1;
- (id)externalPlaybackAirPlayDeviceLocalizedName;
- (int)externalPlaybackType;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (struct WebVideoFullscreenInterfaceAVKit { int (**x1)(); struct atomic<int> { int x_2_1_1; } x2; struct RetainPtr<WebAVPlayerController> { void *x_3_1_1; } x3; struct RetainPtr<AVPlayerViewController> { void *x_4_1_1; } x4; struct RetainPtr<CALayer> { void *x_5_1_1; } x5; struct RetainPtr<WebAVVideoLayer> { void *x_6_1_1; } x6; struct RetainPtr<WebCALayerHostWrapper> { void *x_7_1_1; } x7; struct WebVideoFullscreenModel {} *x8; struct WebVideoFullscreenChangeObserver {} *x9; struct RetainPtr<UIWindow> { void *x_10_1_1; } x10; struct RetainPtr<UIViewController> { void *x_11_1_1; } x11; struct RetainPtr<UIView> { void *x_12_1_1; } x12; struct RetainPtr<UIWindow> { void *x_13_1_1; } x13; unsigned int x14; struct function<void (bool)>={type=[12C] {} x15; struct __base<void (bool)> {} *x16; }*)fullscreenInterface;
- (void)gotoEndOfSeekableRanges:(id)arg1;
- (BOOL)hasAudioMediaSelectionOptions;
- (BOOL)hasEnabledAudio;
- (BOOL)hasEnabledVideo;
- (BOOL)hasLegibleMediaSelectionOptions;
- (BOOL)hasLiveStreamingContent;
- (BOOL)hasMediaSelectionOptions;
- (id)init;
- (BOOL)isExternalPlaybackActive;
- (BOOL)isPictureInPicturePossible;
- (BOOL)isPlaying;
- (BOOL)isPlayingOnExternalScreen;
- (id)legibleMediaSelectionOptions;
- (id)loadedTimeRanges;
- (double)maxTime;
- (double)minTime;
- (void)pause:(id)arg1;
- (void)play:(id)arg1;
- (id)player;
- (id)playerControllerProxy;
- (void)playerViewController:(id)arg1 restoreUserInterfaceForPictureInPictureStopWithCompletionHandler:(id /* block */)arg2;
- (BOOL)playerViewController:(id)arg1 shouldExitFullScreenWithReason:(int)arg2;
- (void)playerViewControllerDidCancelOptimizedFullscreen:(id)arg1;
- (void)playerViewControllerDidStartPictureInPicture:(id)arg1;
- (void)playerViewControllerDidStopPictureInPicture:(id)arg1;
- (void)playerViewControllerWillCancelOptimizedFullscreen:(id)arg1;
- (void)playerViewControllerWillStartPictureInPicture:(id)arg1;
- (void)playerViewControllerWillStopPictureInPicture:(id)arg1;
- (double)rate;
- (void)resetState;
- (void)seekChapterBackward:(id)arg1;
- (void)seekChapterForward:(id)arg1;
- (void)seekToBeginning:(id)arg1;
- (void)seekToEnd:(id)arg1;
- (void)seekToTime:(double)arg1;
- (id)seekableTimeRanges;
- (void)setAudioMediaSelectionOptions:(id)arg1;
- (void)setCanPause:(BOOL)arg1;
- (void)setCanPlay:(BOOL)arg1;
- (void)setCanScanBackward:(BOOL)arg1;
- (void)setCanSeek:(BOOL)arg1;
- (void)setCanTogglePlayback:(BOOL)arg1;
- (void)setContentDimensions:(struct CGSize { float x1; float x2; })arg1;
- (void)setContentDuration:(double)arg1;
- (void)setContentDurationWithinEndTimes:(double)arg1;
- (void)setCurrentAudioMediaSelectionOption:(id)arg1;
- (void)setCurrentLegibleMediaSelectionOption:(id)arg1;
- (void)setDelegate:(struct WebVideoFullscreenModel { int (**x1)(); }*)arg1;
- (void)setExternalPlaybackActive:(BOOL)arg1;
- (void)setExternalPlaybackAirPlayDeviceLocalizedName:(id)arg1;
- (void)setExternalPlaybackType:(int)arg1;
- (void)setFullscreenInterface:(struct WebVideoFullscreenInterfaceAVKit { int (**x1)(); struct atomic<int> { int x_2_1_1; } x2; struct RetainPtr<WebAVPlayerController> { void *x_3_1_1; } x3; struct RetainPtr<AVPlayerViewController> { void *x_4_1_1; } x4; struct RetainPtr<CALayer> { void *x_5_1_1; } x5; struct RetainPtr<WebAVVideoLayer> { void *x_6_1_1; } x6; struct RetainPtr<WebCALayerHostWrapper> { void *x_7_1_1; } x7; struct WebVideoFullscreenModel {} *x8; struct WebVideoFullscreenChangeObserver {} *x9; struct RetainPtr<UIWindow> { void *x_10_1_1; } x10; struct RetainPtr<UIViewController> { void *x_11_1_1; } x11; struct RetainPtr<UIView> { void *x_12_1_1; } x12; struct RetainPtr<UIWindow> { void *x_13_1_1; } x13; unsigned int x14; struct function<void (bool)>={type=[12C] {} x15; struct __base<void (bool)> {} *x16; }*)arg1;
- (void)setHasEnabledAudio:(BOOL)arg1;
- (void)setHasEnabledVideo:(BOOL)arg1;
- (void)setLegibleMediaSelectionOptions:(id)arg1;
- (void)setLoadedTimeRanges:(id)arg1;
- (void)setMaxTime:(double)arg1;
- (void)setMinTime:(double)arg1;
- (void)setPlayerControllerProxy:(id)arg1;
- (void)setPlaying:(BOOL)arg1;
- (void)setRate:(double)arg1;
- (void)setSeekableTimeRanges:(id)arg1;
- (void)setStatus:(int)arg1;
- (void)setTiming:(id)arg1;
- (void)skipBackwardThirtySeconds:(id)arg1;
- (int)status;
- (id)timing;
- (void)togglePlayback:(id)arg1;
- (void)togglePlaybackEvenWhenInBackground:(id)arg1;

@end
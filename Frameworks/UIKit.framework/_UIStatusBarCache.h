/* Generated by RuntimeBrowser
   Image: /Applications/Xcode-beta.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface _UIStatusBarCache : NSObject {
    CPBitmapStore * _store;
}

+ (id)sharedInstance;

- (void).cxx_destruct;
- (BOOL)_canCacheImages;
- (void)cacheImage:(id)arg1 named:(id)arg2 forGroup:(id)arg3;
- (id)imageNamed:(id)arg1 forGroup:(id)arg2 withScale:(float)arg3;
- (id)init;
- (void)removeImagesInGroup:(id)arg1;

@end
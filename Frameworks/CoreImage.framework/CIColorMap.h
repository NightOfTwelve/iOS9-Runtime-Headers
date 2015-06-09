/* Generated by RuntimeBrowser
   Image: /Applications/Xcode-beta.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks/CoreImage.framework/CoreImage
 */

@interface CIColorMap : CIFilter {
    CIImage * cachedGradientImage;
    CIImage * inputGradientImage;
    CIImage * inputImage;
}

@property (nonatomic, retain) CIImage *cachedGradientImage;
@property (nonatomic, retain) CIImage *inputGradientImage;
@property (nonatomic, retain) CIImage *inputImage;

+ (id)customAttributes;

- (id)_kernel;
- (id)cachedGradientImage;
- (void)dealloc;
- (id)gradientImage;
- (id)inputGradientImage;
- (id)inputImage;
- (id)outputImage;
- (void)setCachedGradientImage:(id)arg1;
- (void)setInputGradientImage:(id)arg1;
- (void)setInputImage:(id)arg1;

@end
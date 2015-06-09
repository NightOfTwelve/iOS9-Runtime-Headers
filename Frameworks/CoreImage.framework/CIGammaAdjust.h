/* Generated by RuntimeBrowser
   Image: /Applications/Xcode-beta.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks/CoreImage.framework/CoreImage
 */

@interface CIGammaAdjust : CIFilter {
    CIImage * inputImage;
    NSNumber * inputPower;
}

@property (nonatomic, retain) CIImage *inputImage;
@property (nonatomic, retain) NSNumber *inputPower;

+ (id)customAttributes;

- (BOOL)_isIdentity;
- (id)inputImage;
- (id)inputPower;
- (id)outputImage;
- (void)setInputImage:(id)arg1;
- (void)setInputPower:(id)arg1;

@end
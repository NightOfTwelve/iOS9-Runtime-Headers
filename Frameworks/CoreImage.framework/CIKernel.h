/* Generated by RuntimeBrowser
   Image: /Applications/Xcode-beta.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks/CoreImage.framework/CoreImage
 */

@interface CIKernel : NSObject {
    void * _priv;
}

@property (readonly) NSString *name;

+ (id)_getDictForSourceString:(id)arg1 dimensionality:(int*)arg2;
+ (id)colorMatrixBiasKernel;
+ (id)kernelWithString:(id)arg1;
+ (id)kernelsWithString:(id)arg1;
+ (id)kernelsWithString:(id)arg1 messageLog:(id)arg2;

- (SEL)ROISelector;
- (id)_initWithDict:(id)arg1;
- (id)_initWithFirstKernelFromString:(id)arg1;
- (id)_initWithInternalRepresentation:(void*)arg1;
- (id)applyWithExtent:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 roiCallback:(id /* block */)arg2 arguments:(id)arg3;
- (id)applyWithExtent:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 roiCallback:(id /* block */)arg2 arguments:(id)arg3 options:(id)arg4;
- (id)applyWithExtent:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 roiCallback:(id /* block */)arg2 cpuCallback:(id /* block */)arg3 colorManagement:(bool)arg4 andArguments:(id)arg5;
- (id)description;
- (id)init;
- (id)initWithString:(id)arg1;
- (id)name;
- (id)parameters;
- (void)setROISelector:(SEL)arg1;

// CIKernel (CruftCompatability)

+ (id)betterString:(id)arg1;
+ (id)hashForString:(id)arg1;
+ (id)modifiedKernelStringForFosl:(id)arg1;
+ (id)removeTableKeyword:(id)arg1;

@end

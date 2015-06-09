/* Generated by RuntimeBrowser
   Image: /Applications/Xcode-beta.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIAlertControllerVisualStyleActionSheet : UIAlertControllerVisualStyle

- (float)_systemFontSize;
- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })actionImageMarginForAction:(id)arg1 withViewRepresentation:(id)arg2 inAlertController:(id)arg3;
- (void)animateAlertControllerView:(id)arg1 ofAlertController:(id)arg2 forPresentation:(BOOL)arg3 inContainerView:(id)arg4 descendantOfContainerView:(id)arg5 duration:(double)arg6 completionBlock:(id /* block */)arg7;
- (float)backgroundCornerRadius;
- (id)backgroundViewForAction:(id)arg1 withViewRepresentation:(id)arg2 inAlertController:(id)arg3;
- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })contentInsets;
- (id)defaultActionBackgroundColorWhenSeparate;
- (BOOL)hideCancelAction:(id)arg1 inAlertController:(id)arg2;
- (float)marginAboveMessageLabelFirstBaseline;
- (float)marginAboveTitleLabelFirstBaseline;
- (float)marginBelowLastLabelLastBaseline;
- (float)marginBelowMessageLabelLastBaseline;
- (float)marginBelowTitleLabelLastBaseline;
- (float)maximumWidth;
- (id)messageLabelColor;
- (id)messageLabelFont;
- (float)minimumActionHeight;
- (int)permittedActionLayoutDirection;
- (void)positionAlertControllerView:(id)arg1 ofAlertController:(id)arg2 inAvailableSpaceView:(id)arg3;
- (id)preferredActionFont;
- (id)regularActionFont;
- (float)sectionDelimitingSeparatorDimension;
- (id)titleLabelColor;
- (id)titleLabelFont;
- (double)transitionDurationForPresentation:(BOOL)arg1 ofAlertController:(id)arg2;

@end
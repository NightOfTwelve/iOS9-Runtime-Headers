/* Generated by RuntimeBrowser
   Image: /Applications/Xcode-beta.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSMutableAttributedString : NSAttributedString

// Image: /Applications/Xcode-beta.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks/Foundation.framework/Foundation

+ (id)allocWithZone:(struct _NSZone { }*)arg1;

- (void)addAttribute:(id)arg1 value:(id)arg2 range:(struct _NSRange { unsigned int x1; unsigned int x2; })arg3;
- (void)addAttributes:(id)arg1 range:(struct _NSRange { unsigned int x1; unsigned int x2; })arg2;
- (void)addAttributesWeakly:(id)arg1 range:(struct _NSRange { unsigned int x1; unsigned int x2; })arg2;
- (void)appendAttributedString:(id)arg1;
- (void)beginEditing;
- (void)deleteCharactersInRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1;
- (void)endEditing;
- (void)insertAttributedString:(id)arg1 atIndex:(unsigned int)arg2;
- (id)mutableString;
- (void)removeAttribute:(id)arg1 range:(struct _NSRange { unsigned int x1; unsigned int x2; })arg2;
- (void)replaceCharactersInRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1 withAttributedString:(id)arg2;
- (void)replaceCharactersInRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1 withString:(id)arg2;
- (void)setAttributedString:(id)arg1;
- (void)setAttributes:(id)arg1 range:(struct _NSRange { unsigned int x1; unsigned int x2; })arg2;

// Image: /Applications/Xcode-beta.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks/UIKit.framework/UIKit

// NSMutableAttributedString (UIKitAdditions)

- (void)_ui_restoreOriginalFontAttributes;

// Image: /Applications/Xcode-beta.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/UIFoundation.framework/UIFoundation

// NSMutableAttributedString (null)

- (BOOL)_attributeFixingInProgress;
- (void)_changeIntAttribute:(id)arg1 by:(int)arg2 range:(struct _NSRange { unsigned int x1; unsigned int x2; })arg3;
- (void)_fixGlyphInfo:(id)arg1 inRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg2;
- (void)_setAttributeFixingInProgress:(BOOL)arg1;
- (BOOL)_shouldSetOriginalFontAttribute;
- (void)convertBidiControlCharactersToWritingDirection;
- (struct _NSRange { unsigned int x1; unsigned int x2; })convertBidiControlCharactersToWritingDirectionForParagraphAtIndex:(unsigned int)arg1;
- (void)convertWritingDirectionToBidiControlCharacters;
- (struct _NSRange { unsigned int x1; unsigned int x2; })convertWritingDirectionToBidiControlCharactersForParagraphAtIndex:(unsigned int)arg1;
- (void)fixAttachmentAttributeInRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1;
- (void)fixAttributesInRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1;
- (void)fixFontAttributeInRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1;
- (void)fixGlyphInfoAttributeInRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1;
- (void)fixParagraphStyleAttributeInRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1;
- (BOOL)readFromData:(id)arg1 options:(id)arg2 documentAttributes:(id*)arg3;
- (BOOL)readFromData:(id)arg1 options:(id)arg2 documentAttributes:(id*)arg3 error:(id*)arg4;
- (BOOL)readFromFileURL:(id)arg1 options:(id)arg2 documentAttributes:(id*)arg3 error:(id*)arg4;
- (BOOL)readFromURL:(id)arg1 options:(id)arg2 documentAttributes:(id*)arg3;
- (BOOL)readFromURL:(id)arg1 options:(id)arg2 documentAttributes:(id*)arg3 error:(id*)arg4;
- (void)setAlignment:(int)arg1 range:(struct _NSRange { unsigned int x1; unsigned int x2; })arg2;
- (void)setBaseWritingDirection:(int)arg1 range:(struct _NSRange { unsigned int x1; unsigned int x2; })arg2;
- (void)subscriptRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1;
- (void)superscriptRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1;
- (void)unscriptRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1;

@end
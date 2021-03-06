/* Generated by RuntimeBrowser
   Image: /Applications/Xcode-beta.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSPersonNameComponentsFormatter : NSFormatter <NSCopying, NSObservable, NSObserver, NSSecureCoding> {
    id  _private;
}

@property BOOL _forceFamilyNameFirst;
@property BOOL _forceGivenNameFirst;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property int formattingContext;
@property (readonly) unsigned int hash;
@property (getter=isPhonetic) BOOL phonetic;
@property int style;
@property (readonly) Class superclass;

+ (BOOL)__contents:(id)arg1 exclusivelyInCharacterSet:(struct USet { }*)arg2;
+ (BOOL)__displayLanguageAbbreviationEnabled;
+ (id)__displayLanguageDefaults;
+ (id)__displayLanguageIdentifier;
+ (id)__displayLanguageLocale;
+ (int)__displayLanguageNameOrder;
+ (int)__displayLanguageShortNameFormat;
+ (id)__familyNameFirstOrdering;
+ (struct USet { }*)__getCharacterSetWithPattern:(id)arg1;
+ (id)__givenNameFirstOrdering;
+ (id)__inferredDelimiterBetweenStringOne:(id)arg1 andStringTwo:(id)arg2 isPhonetic:(BOOL)arg3;
+ (unsigned int)__inferredScriptIndexForComponents:(id)arg1;
+ (unsigned int)__inferredScriptIndexFromString:(id)arg1;
+ (id)__localizedNameDefaults;
+ (id)__longestComponentFromComponents:(id)arg1;
+ (id)_cjkLanguagesSet;
+ (int)_defaultDisplayNameOrder;
+ (int)_defaultShortNameFormat;
+ (id)_fallbackDescriptorForStyle:(int)arg1 options:(unsigned int)arg2;
+ (id)_formatterWithStyle:(int)arg1 options:(unsigned int)arg2;
+ (BOOL)_isCJKScript:(id)arg1;
+ (id)_localizedShortNameForComponents:(id)arg1 withStyle:(int)arg2 options:(unsigned int)arg3;
+ (int)_nameOrderWithOverridesForComponents:(id)arg1 options:(unsigned int)arg2;
+ (id)_relevantKeyPathsForStyle:(int)arg1 options:(unsigned int)arg2;
+ (void)_setDefaultDisplayNameOrder:(int)arg1;
+ (void)_setPreferNicknamesDefault:(BOOL)arg1;
+ (void)_setShortNameFormat:(int)arg1;
+ (void)_setShortNameIsEnabled:(BOOL)arg1;
+ (BOOL)_shortNameIsEnabled;
+ (BOOL)_shouldPreferNicknames;
+ (id)_styleFormatterForStyle:(int)arg1 masterFormatter:(id)arg2;
+ (void)forEachExistingComponentWithComponents:(id)arg1 performBlock:(id /* block */)arg2;
+ (BOOL)isKatakana:(id)arg1;
+ (id)localizedStringFromPersonNameComponents:(id)arg1 style:(int)arg2 options:(unsigned int)arg3;
+ (BOOL)supportsSecureCoding;

- (int)__defaultNameOrder;
- (BOOL)_forceFamilyNameFirst;
- (BOOL)_forceGivenNameFirst;
- (int)_nameOrderWithOverridesForComponents:(id)arg1;
- (id)annotatedStringFromPersonNameComponents:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (int)formattingContext;
- (BOOL)getObjectValue:(out id*)arg1 forString:(id)arg2 errorDescription:(out id*)arg3;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualToFormatter:(id)arg1;
- (BOOL)isPhonetic;
- (void)setFormattingContext:(int)arg1;
- (void)setPhonetic:(BOOL)arg1;
- (void)setStyle:(int)arg1;
- (void)set_forceFamilyNameFirst:(BOOL)arg1;
- (void)set_forceGivenNameFirst:(BOOL)arg1;
- (id)stringFromPersonNameComponents:(id)arg1;
- (int)style;

// NSPersonNameComponentsFormatter (NSObservationSupport)

- (void)receiveObservedValue:(id)arg1;

@end

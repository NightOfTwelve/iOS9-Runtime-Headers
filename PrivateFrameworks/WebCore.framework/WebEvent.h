/* Generated by RuntimeBrowser
   Image: /Applications/Xcode-beta.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

@interface WebEvent : NSObject {
    int  _characterSet;
    NSString * _characters;
    NSString * _charactersIgnoringModifiers;
    float  _deltaX;
    float  _deltaY;
    float  _gestureRotation;
    float  _gestureScale;
    BOOL  _isGesture;
    unsigned short  _keyCode;
    BOOL  _keyRepeating;
    unsigned int  _keyboardFlags;
    struct CGPoint { 
        float x; 
        float y; 
    }  _locationInWindow;
    unsigned int  _modifierFlags;
    BOOL  _popupVariant;
    BOOL  _tabKey;
    double  _timestamp;
    unsigned int  _touchCount;
    NSArray * _touchIdentifiers;
    NSArray * _touchLocations;
    NSArray * _touchPhases;
    int  _type;
    BOOL  _wasHandled;
}

@property (nonatomic, readonly) int characterSet;
@property (nonatomic, readonly, retain) NSString *characters;
@property (nonatomic, readonly, retain) NSString *charactersIgnoringModifiers;
@property (nonatomic, readonly) float deltaX;
@property (nonatomic, readonly) float deltaY;
@property (nonatomic, readonly) float gestureRotation;
@property (nonatomic, readonly) float gestureScale;
@property (nonatomic, readonly) BOOL isGesture;
@property (nonatomic, readonly) unsigned short keyCode;
@property (getter=isKeyRepeating, nonatomic, readonly) BOOL keyRepeating;
@property (nonatomic, readonly) unsigned int keyboardFlags;
@property (nonatomic, readonly) struct CGPoint { float x1; float x2; } locationInWindow;
@property (nonatomic, readonly) unsigned int modifierFlags;
@property (getter=isPopupVariant, nonatomic, readonly) BOOL popupVariant;
@property (getter=isTabKey, nonatomic, readonly) BOOL tabKey;
@property (nonatomic, readonly) double timestamp;
@property (nonatomic, readonly) unsigned int touchCount;
@property (nonatomic, readonly, retain) NSArray *touchIdentifiers;
@property (nonatomic, readonly, retain) NSArray *touchLocations;
@property (nonatomic, readonly, retain) NSArray *touchPhases;
@property (nonatomic, readonly) int type;
@property (nonatomic) BOOL wasHandled;

- (id)_characterSetDescription;
- (id)_eventDescription;
- (id)_modiferFlagsDescription;
- (id)_touchIdentifiersDescription;
- (id)_touchLocationsDescription:(id)arg1;
- (id)_touchPhaseDescription:(int)arg1;
- (id)_touchPhasesDescription;
- (id)_typeDescription;
- (int)characterSet;
- (id)characters;
- (id)charactersIgnoringModifiers;
- (void)dealloc;
- (float)deltaX;
- (float)deltaY;
- (id)description;
- (float)gestureRotation;
- (float)gestureScale;
- (id)initWithKeyEventType:(int)arg1 timeStamp:(double)arg2 characters:(id)arg3 charactersIgnoringModifiers:(id)arg4 modifiers:(unsigned int)arg5 isRepeating:(BOOL)arg6 isPopupVariant:(BOOL)arg7 keyCode:(unsigned short)arg8 isTabKey:(BOOL)arg9 characterSet:(int)arg10;
- (id)initWithKeyEventType:(int)arg1 timeStamp:(double)arg2 characters:(id)arg3 charactersIgnoringModifiers:(id)arg4 modifiers:(unsigned int)arg5 isRepeating:(BOOL)arg6 withFlags:(unsigned int)arg7 keyCode:(unsigned short)arg8 isTabKey:(BOOL)arg9 characterSet:(int)arg10;
- (id)initWithMouseEventType:(int)arg1 timeStamp:(double)arg2 location:(struct CGPoint { float x1; float x2; })arg3;
- (id)initWithScrollWheelEventWithTimeStamp:(double)arg1 location:(struct CGPoint { float x1; float x2; })arg2 deltaX:(float)arg3 deltaY:(float)arg4;
- (id)initWithTouchEventType:(int)arg1 timeStamp:(double)arg2 location:(struct CGPoint { float x1; float x2; })arg3 modifiers:(unsigned int)arg4 touchCount:(unsigned int)arg5 touchLocations:(id)arg6 touchIdentifiers:(id)arg7 touchPhases:(id)arg8 isGesture:(BOOL)arg9 gestureScale:(float)arg10 gestureRotation:(float)arg11;
- (BOOL)isGesture;
- (BOOL)isKeyRepeating;
- (BOOL)isPopupVariant;
- (BOOL)isTabKey;
- (unsigned short)keyCode;
- (unsigned int)keyboardFlags;
- (struct CGPoint { float x1; float x2; })locationInWindow;
- (unsigned int)modifierFlags;
- (void)setWasHandled:(BOOL)arg1;
- (double)timestamp;
- (unsigned int)touchCount;
- (id)touchIdentifiers;
- (id)touchLocations;
- (id)touchPhases;
- (int)type;
- (BOOL)wasHandled;

@end
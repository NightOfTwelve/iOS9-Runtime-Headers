/* Generated by RuntimeBrowser
   Image: /Applications/Xcode-beta.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard
 */

@interface BSAuditHistory : NSObject <BSDescriptionProviding, BSXPCCoding> {
    NSMutableArray * _items;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) BOOL hasItems;
@property (readonly) unsigned int hash;
@property (nonatomic, readonly, retain) NSArray *items;
@property (readonly) Class superclass;

// BSAuditHistory (null)

- (void)addItem:(id)arg1;
- (void)addItemWithFormat:(id)arg1;
- (void)dealloc;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (void)encodeWithXPCDictionary:(id)arg1;
- (BOOL)hasItems;
- (id)init;
- (id)initWithXPCDictionary:(id)arg1;
- (id)items;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;

@end

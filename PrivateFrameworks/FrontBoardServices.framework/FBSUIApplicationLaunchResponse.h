/* Generated by RuntimeBrowser
   Image: /Applications/Xcode-beta.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/FrontBoardServices.framework/FrontBoardServices
 */

@interface FBSUIApplicationLaunchResponse : FBSWorkspaceResponse {
    BOOL  _supportsTaskSuspension;
    BOOL  _supportsTaskSuspensionOnLock;
    BSMachPortSendRight * _taskPort;
}

@property (nonatomic) BOOL supportsTaskSuspension;
@property (nonatomic) BOOL supportsTaskSuspensionOnLock;
@property (nonatomic, retain) BSMachPortSendRight *taskPort;

// FBSUIApplicationLaunchResponse (null)

- (void)dealloc;
- (void)encodeWithXPCDictionary:(id)arg1;
- (id)initWithXPCDictionary:(id)arg1;
- (void)setSupportsTaskSuspension:(BOOL)arg1;
- (void)setSupportsTaskSuspensionOnLock:(BOOL)arg1;
- (void)setTaskPort:(id)arg1;
- (BOOL)supportsTaskSuspension;
- (BOOL)supportsTaskSuspensionOnLock;
- (id)taskPort;

@end

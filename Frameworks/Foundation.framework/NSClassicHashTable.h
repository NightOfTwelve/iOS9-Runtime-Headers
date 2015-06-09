/* Generated by RuntimeBrowser
   Image: /Applications/Xcode-beta.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSClassicHashTable : NSHashTable {
    struct { 
        int (*hash)(); 
        int (*isEqual)(); 
        int (*retain)(); 
        int (*release)(); 
        int (*describe)(); 
    }  _callBacks;
    struct __CFBasicHash { } * _ht;
}

- (void)addObject:(id)arg1;
- (id)allObjects;
- (id)copy;
- (unsigned int)count;
- (void)dealloc;
- (id)description;
- (void*)getItem:(const void*)arg1;
- (void)getKeys:(const void**)arg1 count:(unsigned int*)arg2;
- (unsigned int)hash;
- (id)init;
- (void)insertItem:(const void*)arg1;
- (void)insertKnownAbsentItem:(const void*)arg1;
- (BOOL)isEqual:(id)arg1;
- (void)removeAllItems;
- (void)removeItem:(const void*)arg1;

@end
/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CalendarUIKit.framework/CalendarUIKit
 */

@interface CUIKUserActivityWithSource : CUIKUserActivity {
    NSString *_sourceHost;
    NSString *_sourceOwner;
    int _sourceType;
}

- (void).cxx_destruct;
- (BOOL)_isLocalSource;
- (BOOL)_requiresHostAndOwner;
- (BOOL)_supportsConsistentExternalIDAcrossDevices;
- (BOOL)_supportsConsistentExternalIDAcrossDevices:(int)arg1;
- (id)dictionary;
- (id)initWithDictionary:(id)arg1;
- (id)initWithSource:(id)arg1 type:(unsigned int)arg2;
- (unsigned int)isMatchForSource:(id)arg1;

@end

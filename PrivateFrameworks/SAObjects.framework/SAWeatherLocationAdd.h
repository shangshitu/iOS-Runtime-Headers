/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@class NSURL, SAWeatherLocation;

@interface SAWeatherLocationAdd : SABaseClientBoundCommand  {
}

@property(copy) NSURL * targetAppId;
@property(retain) SAWeatherLocation * weatherLocation;

+ (id)locationAddWithDictionary:(id)arg1 context:(id)arg2;
+ (id)locationAdd;

- (id)groupIdentifier;
- (void)setWeatherLocation:(id)arg1;
- (id)weatherLocation;
- (BOOL)requiresResponse;
- (void)setTargetAppId:(id)arg1;
- (id)targetAppId;
- (id)encodedClassName;

@end
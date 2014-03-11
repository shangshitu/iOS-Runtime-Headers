/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@class NSArray, NSString;

@interface MPStoreOfferMediaItemArtwork : MPMediaItemArtwork {
    NSString *_cacheID;
    NSArray *_containerArtworkDictionaries;
    unsigned int _hash;
    NSArray *_itemArtworkDictionaries;
    long long _itemPersistentID;
    NSArray *_screenshotDictionaries;
}

@property(readonly) NSString * cacheID;

- (void).cxx_destruct;
- (id)_bestImageURLForSize:(struct CGSize { float x1; float x2; })arg1 artworkDictionaries:(id)arg2;
- (id)_imageWithURL:(id)arg1;
- (id)albumImageDataWithSize:(struct CGSize { float x1; float x2; })arg1;
- (id)albumImageWithSize:(struct CGSize { float x1; float x2; })arg1;
- (id)cacheID;
- (BOOL)hasArtworkAvailable;
- (unsigned int)hash;
- (id)imageDataWithSize:(struct CGSize { float x1; float x2; })arg1 atPlaybackTime:(double)arg2;
- (id)imageWithFormat:(int)arg1 artworkCacheID:(id)arg2 canUseSurfaceBackedImage:(BOOL)arg3;
- (id)imageWithSize:(struct CGSize { float x1; float x2; })arg1 artworkCacheID:(id)arg2;
- (id)imageWithSize:(struct CGSize { float x1; float x2; })arg1 atPlaybackTime:(double)arg2;
- (id)imageWithSize:(struct CGSize { float x1; float x2; })arg1;
- (id)initWithItemPersistentID:(long long)arg1 screenshotDictionaries:(id)arg2 itemArtworkDictionaries:(id)arg3 containerArtworkDictionaries:(id)arg4;
- (BOOL)shouldAsynchrounouslyLoadArtworkForItemWithIdentifier:(long long)arg1 artworkFormat:(int)arg2 artworkCacheID:(id)arg3;
- (BOOL)shouldAsynchrounouslyLoadArtworkForItemWithIdentifier:(long long)arg1 artworkSize:(struct CGSize { float x1; float x2; })arg2 artworkCacheID:(id)arg3;

@end
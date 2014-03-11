/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSMetadataQuery : NSObject {
    unsigned int _flags;
    double _interval;
    id _private[11];
    void *_reserved;
}

+ (BOOL)automaticallyNotifiesObserversForKey:(id)arg1;
+ (id)keyPathsForValuesAffectingValueForKey:(id)arg1;

- (id)_allAttributes;
- (void)_disableAutoUpdates;
- (void)_enableAutoUpdates;
- (void)_noteNote1:(id)arg1;
- (void)_noteNote2:(id)arg1;
- (void)_noteNote3:(id)arg1;
- (void)_noteNote4:(id)arg1;
- (void)_noteNote5:(id)arg1;
- (void)_postNotificationName:(id)arg1 userInfo:(id)arg2;
- (id)_queryString;
- (void)_recreateQuery;
- (void)_resetQueryState;
- (void)_setBatchingParams;
- (id)_sortingAttributes;
- (void)_update;
- (void)_zapResultArrayIfIdenticalTo:(id)arg1;
- (void)dealloc;
- (id)delegate;
- (void)disableUpdates;
- (void)enableUpdates;
- (void)enumerateResultsUsingBlock:(id)arg1;
- (void)enumerateResultsWithOptions:(unsigned int)arg1 usingBlock:(id)arg2;
- (void)finalize;
- (id)groupedResults;
- (id)groupingAttributes;
- (unsigned int)indexOfResult:(id)arg1;
- (id)init;
- (BOOL)isGathering;
- (BOOL)isStarted;
- (BOOL)isStopped;
- (double)notificationBatchingInterval;
- (id)operationQueue;
- (id)predicate;
- (id)resultAtIndex:(unsigned int)arg1;
- (unsigned int)resultCount;
- (id)results;
- (id)searchItemURLs;
- (id)searchItems;
- (id)searchScopes;
- (void)setDelegate:(id)arg1;
- (void)setGroupingAttributes:(id)arg1;
- (void)setNotificationBatchingInterval:(double)arg1;
- (void)setOperationQueue:(id)arg1;
- (void)setPredicate:(id)arg1;
- (void)setSearchItemURLs:(id)arg1;
- (void)setSearchItems:(id)arg1;
- (void)setSearchScopes:(id)arg1;
- (void)setSortDescriptors:(id)arg1;
- (void)setValueListAttributes:(id)arg1;
- (id)sortDescriptors;
- (BOOL)startQuery;
- (void)stopQuery;
- (id)valueListAttributes;
- (id)valueLists;
- (id)valueOfAttribute:(id)arg1 forResultAtIndex:(unsigned int)arg2;

@end
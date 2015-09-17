/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ContactsAutocomplete.framework/ContactsAutocomplete
 */

@interface CNAutocompleteQueryResponsePreparer : NSObject {
    <CNAutocompleteFetchDelegate> *_delegate;
    NSMutableOrderedSet *_previouslyReturnedResults;
    <CNFuture> *_priorityResultsFuture;
}

@property (nonatomic, readonly) <CNAutocompleteFetchDelegate> *delegate;
@property (nonatomic, retain) <CNFuture> *priorityResultsFuture;

- (void).cxx_destruct;
- (id)addDiagnosticLog:(id /* block */)arg1;
- (id)applyPriorityResultsOrder:(id)arg1;
- (id)askDelegateToAdjustResults;
- (id)delegate;
- (id)findUniqueResults:(id)arg1;
- (id)init;
- (id)initWithDelegate:(id)arg1;
- (id)prepareResults:(id)arg1;
- (id)priorityResultsFuture;
- (id)resultsNotPreviouslyReturned:(id)arg1;
- (void)setPriorityResultsFuture:(id)arg1;
- (id)sortResults;
- (id)suppressResultsWithAddresses:(id)arg1;

@end
/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SearchUI.framework/SearchUI
 */

@interface SearchUIGradingFeedbackViewController : UIAlertController <MFMailComposeViewControllerDelegate> {
    <SearchUIFeedbackDelegate> * _feedbackDelegate;
    SFSearchResult * _result;
    UIViewController * _viewControllerForPresenting;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property <SearchUIFeedbackDelegate> *feedbackDelegate;
@property (readonly) unsigned int hash;
@property (retain) SFSearchResult *result;
@property (readonly) Class superclass;
@property (retain) UIViewController *viewControllerForPresenting;

- (void).cxx_destruct;
- (void)addActionForGrade:(unsigned int)arg1 title:(id)arg2;
- (id)feedbackDelegate;
- (id)initWithResult:(id)arg1 feedbackDelegate:(id)arg2;
- (void)mailComposeController:(id)arg1 didFinishWithResult:(int)arg2 error:(id)arg3;
- (id)result;
- (void)setFeedbackDelegate:(id)arg1;
- (void)setResult:(id)arg1;
- (void)setViewControllerForPresenting:(id)arg1;
- (id)viewControllerForPresenting;
- (void)viewWillAppear:(BOOL)arg1;

@end

/* Generated by RuntimeBrowser
   Image: /Applications/Xcode-beta.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIPrintPanelTableViewController : UITableViewController {
    BOOL  _contactingPrinter;
    int  _copiesRow;
    int  _duplexRow;
    int  _grayscaleRow;
    int  _jobAccountIDRow;
    int  _paperRow;
    UIPrintPanelViewController * _printPanelViewController;
    UIPrintPreviewViewController * _printPreviewViewController;
    BOOL  _printerWarningWasShown;
    int  _rangeRow;
    BOOL  _settingsExpanded;
    int  _settingsRow;
    int  _settingsSection;
    int  _stapleRow;
}

- (void).cxx_destruct;
- (void)clearPrintPanelViewController;
- (float)heightOfPreviewView;
- (id)initWithPrintPanelViewController:(id)arg1;
- (void)moreButtonPushed:(id)arg1;
- (int)numberOfSectionsInTableView:(id)arg1;
- (id)pdfFileURL;
- (void)setPdfFileURL:(id)arg1 destinationPaper:(id)arg2 pdfPassword:(id)arg3;
- (void)setShowContactingPrinter:(BOOL)arg1;
- (void)setShowPreviewGenerating:(BOOL)arg1;
- (BOOL)shouldAutorotateToInterfaceOrientation:(int)arg1;
- (BOOL)shouldEnablePrintButton;
- (void)showCancelButton;
- (void)showContacting;
- (void)showPreviewGenerating;
- (unsigned int)supportedInterfaceOrientations;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (id)tableView:(id)arg1 titleForFooterInSection:(int)arg2;
- (id)textForSettings;
- (void)updateCopies:(id)arg1;
- (void)updateDuplex:(id)arg1;
- (void)updateGrayscale:(id)arg1;
- (void)updateJobAccountID:(id)arg1;
- (void)updatePageRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1;
- (void)updatePageRangeText;
- (void)updateStaple:(id)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewWillTransitionToSize:(struct CGSize { float x1; float x2; })arg1 withTransitionCoordinator:(id)arg2;

// UIPrintPanelTableViewController (Internal)

- (void)_update:(BOOL)arg1;
- (void)_updateSize;

@end

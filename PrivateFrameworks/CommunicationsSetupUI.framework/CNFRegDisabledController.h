/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CommunicationsSetupUI.framework/CommunicationsSetupUI
 */

@interface CNFRegDisabledController : CNFRegFirstRunController {
    PSSpecifier * _spinner;
    PSSpecifier * _turnOnButton;
}

- (void).cxx_destruct;
- (void)_activateSpinner;
- (void)_deactivateSpinner;
- (id)_rightButtonItem;
- (void)_setupAccountHandlersForDisabledOperation;
- (id)bundle;
- (id)getAccountNameForSpecifier:(id)arg1;
- (id)specifierList;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)turnOnTapped:(id)arg1;
- (void)viewWillDisappear:(BOOL)arg1;

@end

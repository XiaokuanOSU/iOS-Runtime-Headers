/* Generated by RuntimeBrowser.
 */

@protocol UIPreviewItemDelegate <NSObject>

@required

- (NSDictionary *)_dataForPreviewItemController:(UIPreviewItemController *)arg1 atPosition:(struct CGPoint { float x1; float x2; })arg2 type:(int*)arg3;

@optional

- (BOOL)_interactionShouldBeginFromPreviewItemController:(UIPreviewItemController *)arg1 forPosition:(struct CGPoint { float x1; float x2; })arg2;
- (void)_interactionStartedFromPreviewItemController:(UIPreviewItemController *)arg1;
- (void)_interactionStoppedFromPreviewItemController:(UIPreviewItemController *)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_presentationRectForPreviewItemController:(UIPreviewItemController *)arg1;
- (NSArray *)_presentationRectsForPreviewItemController:(UIPreviewItemController *)arg1;
- (UIImage *)_presentationSnapshotForPreviewItemController:(UIPreviewItemController *)arg1;
- (UIViewController *)_presentedViewControllerForPreviewItemController:(UIPreviewItemController *)arg1;
- (void)_previewItemController:(UIPreviewItemController *)arg1 commitPreview:(UIViewController *)arg2;
- (void)_previewItemController:(UIPreviewItemController *)arg1 didDismissPreview:(UIViewController *)arg2 committing:(BOOL)arg3;
- (void)_previewItemController:(UIPreviewItemController *)arg1 willPresentPreview:(UIViewController *)arg2 forPosition:(struct CGPoint { float x1; float x2; })arg3 inSourceView:(UIView *)arg4;
- (void)_previewItemControllerDidCancelPreview:(UIPreviewItemController *)arg1;

@end

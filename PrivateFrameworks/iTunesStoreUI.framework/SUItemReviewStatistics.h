/* Generated by RuntimeBrowser on iPhone OS 4.0
   Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@class NSString;



@interface SUItemReviewStatistics : NSObject <NSCopying>
{
    float _averageUserRating;
    NSInteger _numberOfUserRatings;
    NSString *_numberOfUserRatingsString;
    NSInteger _numberOfUserReviews;
    NSString *_numberOfUserReviewsString;
}

@property(copy) NSString *numberOfUserReviewsString;
@property NSInteger numberOfUserReviews;
@property(copy) NSString *numberOfUserRatingsString;
@property NSInteger numberOfUserRatings;
@property float averageUserRating;


- (id)numberOfUserRatingsString;
- (id)numberOfUserReviewsString;
- (void)setNumberOfUserReviewsString:(id)arg1;
- (NSInteger)numberOfUserReviews;
- (void)setNumberOfUserReviews:(NSInteger)arg1;
- (void)setNumberOfUserRatingsString:(id)arg1;
- (NSInteger)numberOfUserRatings;
- (void)setNumberOfUserRatings:(NSInteger)arg1;
- (float)averageUserRating;
- (void)setAverageUserRating:(float)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;

@end
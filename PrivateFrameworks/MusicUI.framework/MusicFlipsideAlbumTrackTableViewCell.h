/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MusicUI.framework/MusicUI
 */

@class MPURatingControl;

@interface MusicFlipsideAlbumTrackTableViewCell : MusicCollectionTrackTableViewCell {
    MPURatingControl *_ratingControl;
    bool_showsRatingControl;
}

@property(readonly) MPURatingControl * ratingControl;
@property bool showsRatingControl;

+ (Class)contentViewClass;

- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)layoutSubviews;
- (id)ratingControl;
- (void)setContentBoundsEdgeInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setShowsRatingControl:(bool)arg1 animated:(bool)arg2;
- (void)setShowsRatingControl:(bool)arg1;
- (bool)showsRatingControl;

@end
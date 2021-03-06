/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotosPlayer.framework/PhotosPlayer
 */

@interface ISLivePhotoHintBehavior : ISBehavior {
    BOOL  __didFinishPreparing;
    float  __lastProgress;
    BOOL  __preparing;
    BOOL  _playDuringHint;
    float  _prerollRate;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _seekTime;
}

@property (setter=_setDidFinishPreparing:, nonatomic) BOOL _didFinishPreparing;
@property (setter=_setLastProgress:, nonatomic) float _lastProgress;
@property (getter=_isPreparing, setter=_setPreparing:, nonatomic) BOOL _preparing;
@property (nonatomic, readonly) BOOL playDuringHint;
@property (nonatomic, readonly) float prerollRate;
@property (nonatomic, readonly) struct { long long x1; int x2; unsigned int x3; long long x4; } seekTime;

- (BOOL)_didFinishPreparing;
- (void)_handleDidFinishPreparing;
- (void)_handleDidPreroll;
- (void)_handleDidSeekToBeginning;
- (BOOL)_isPreparing;
- (float)_lastProgress;
- (void)_prepareIfNeeded;
- (void)_preroll;
- (void)_seekToBeginning;
- (void)_setDidFinishPreparing:(BOOL)arg1;
- (void)_setLastProgress:(float)arg1;
- (void)_setPreparing:(BOOL)arg1;
- (void)activeDidChange;
- (int)behaviorType;
- (void)hintWithProgress:(float)arg1;
- (id)initWithInitialLayoutInfo:(id)arg1 seekTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2 prerollRate:(float)arg3 playDuringHint:(BOOL)arg4;
- (BOOL)playDuringHint;
- (float)prerollRate;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })seekTime;

@end

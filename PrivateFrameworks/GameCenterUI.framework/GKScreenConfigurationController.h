/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
 */

@class GKEventEmitter;

@interface GKScreenConfigurationController : NSObject {
    GKEventEmitter *_emitter;
    double _greatestScreenScale;
}

@property(retain) GKEventEmitter * emitter;
@property(readonly) double greatestScreenScale;

+ (double)_scaleForCurrentDisplayConfiguration;
+ (id)sharedController;

- (void)_screensDidChange:(id)arg1;
- (void)dealloc;
- (id)emitter;
- (double)greatestScreenScale;
- (id)init;
- (void)registerListener:(id)arg1;
- (void)setEmitter:(id)arg1;
- (void)unregisterListener:(id)arg1;

@end
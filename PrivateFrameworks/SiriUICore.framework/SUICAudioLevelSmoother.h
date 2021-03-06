/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SiriUICore.framework/SiriUICore
 */

@interface SUICAudioLevelSmoother : NSObject {
    float  _attackSpeed;
    float  _attackVelocity;
    float  _baseValue;
    float  _decaySpeed;
    float  _decayVelocity;
    float  _exponentMultiplier;
    int  _historyLength;
    float  _maximumPower;
    float  _minimumPower;
    unsigned int  _powerPointer;
    float  _previousLevel;
    float * _runningPowerLevels;
    int  _samplesSinceLastCleared;
    BOOL  _usesAttackAndDecaySpeed;
    BOOL  _usesExponentialCurve;
}

@property (nonatomic) float attackSpeed;
@property (nonatomic) float baseValue;
@property (nonatomic) float decaySpeed;
@property (nonatomic) float exponentMultiplier;
@property (nonatomic) float maximumPower;
@property (nonatomic) float minimumPower;
@property (nonatomic, readonly) BOOL usesAttackAndDecaySpeed;
@property (nonatomic, readonly) BOOL usesExponentialCurve;

- (id)_initWithHistoryLength:(int)arg1;
- (float)_updateMedianWithNewValue:(float)arg1;
- (float)attackSpeed;
- (float)baseValue;
- (void)clearHistory;
- (void)dealloc;
- (float)decaySpeed;
- (float)exponentMultiplier;
- (id)initWithBaseValue:(float)arg1 exponentMultiplier:(float)arg2 historyLength:(int)arg3;
- (id)initWithMinimumPower:(float)arg1 maximumPower:(float)arg2 historyLength:(int)arg3;
- (id)initWithMinimumPower:(float)arg1 maximumPower:(float)arg2 historyLength:(int)arg3 attackSpeed:(float)arg4 decaySpeed:(float)arg5;
- (float)maximumPower;
- (float)minimumPower;
- (void)setAttackSpeed:(float)arg1;
- (void)setBaseValue:(float)arg1;
- (void)setDecaySpeed:(float)arg1;
- (void)setExponentMultiplier:(float)arg1;
- (void)setMaximumPower:(float)arg1;
- (void)setMinimumPower:(float)arg1;
- (float)smoothedLevelForMicPower:(float)arg1;
- (BOOL)usesAttackAndDecaySpeed;
- (BOOL)usesExponentialCurve;

@end

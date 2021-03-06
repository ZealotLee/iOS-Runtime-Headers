/* Generated by RuntimeBrowser.
 */

@protocol SFUOutputStream <SFUSimpleOutputStream>

@required

- (BOOL)canCreateInputStream;
- (BOOL)canSeek;
- (void)close;
- (<SFUOutputStream> *)closeLocalStream;
- (<SFUInputStream> *)inputStream;
- (long long)offset;
- (void)seekToOffset:(long long)arg1 whence:(int)arg2;

@end

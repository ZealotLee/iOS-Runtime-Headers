/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Photos.framework/Photos
 */

@interface PHAssetResourceValidatedContext : NSObject {
    PHAssetResource *_resource;
    NSData *_validatedData;
    NSURL *_validatedURL;
}

@property (nonatomic, readonly) PHAssetResource *resource;
@property (nonatomic, readonly) NSData *validatedData;
@property (nonatomic, readonly) NSURL *validatedURL;

- (void).cxx_destruct;
- (id)initWithResource:(id)arg1 validatedURL:(id)arg2 validatedData:(id)arg3;
- (id)resource;
- (id)validatedData;
- (id)validatedURL;

@end
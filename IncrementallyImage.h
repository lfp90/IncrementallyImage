//
//  IncrementallyImage.h
//  IncrementallyImage
//
//
//  
//

#import <UIKit/UIKit.h>

@interface IncrementallyImage : NSObject <NSURLConnectionDataDelegate>

@property (nonatomic, readonly) NSURL *imageURL;

@property (nonatomic, readonly) UIImage *image;

- (id)initWithURL:(NSURL*)imageURL;

@end

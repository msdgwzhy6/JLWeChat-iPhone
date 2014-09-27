//
//  MKUploader.h
//  JLWeChat
//
//  Created by john on 14-5-23.
//  Copyright (c) 2014年 john. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <AssetsLibrary/AssetsLibrary.h>

@interface IMUploader : NSObject

@property (nonatomic) BOOL showAlert;

+ (instancetype)uploader;
- (void)uploadImage:(UIImage*)image url:(void (^)(NSString* url))block;
- (void)uploadImageArray:(NSArray *)images url:(void (^)(UIImage* image, NSString* url))block;

- (void)uploadImageAsset:(ALAsset *)asset url:(void (^)(NSString* url))block;
- (void)uploadImageAssets:(NSArray *)assets url:(void (^)(ALAsset* asset, NSString* url))block;

- (void)uploadData:(NSData*)data type:(NSString*)type url:(void (^)(NSString* url))block;

@end

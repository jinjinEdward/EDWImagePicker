//
//  EDWImagePickerSelectModel.h
//  EDWImagePickerDemo
//
//  Created by mac on 2018/9/11.
//  Copyright © 2018年 mac. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <Photos/Photos.h>

@interface EDWImagePickerSelectModel : NSObject

@property (retain,nonatomic) PHAsset * asset;
@property (assign,nonatomic) NSInteger number;

@end

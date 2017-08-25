//
//  UIView+WMCFrame.h
//  mobile
//
//  Created by Vary Fan on 16/5/19.
//  Copyright © 2016年 Wal-Mart China. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIView (WMCFrame)

@property (nonatomic, assign) CGFloat x;
@property (nonatomic, assign) CGFloat y;
@property (nonatomic, assign) CGFloat height;
@property (nonatomic, assign) CGFloat width;
@property (nonatomic, assign) CGFloat centerX;
@property (nonatomic, assign) CGFloat centerY;
@property (nonatomic, assign) CGSize size;
@property (nonatomic, assign) CGPoint origin;
@property (nonatomic, assign, readonly) CGFloat bottom;
@property (nonatomic, assign, readonly) CGFloat right;

@end

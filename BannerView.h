//
//  BannerView.h
//
//  Created by zhudm on 15-9-15.
//  Copyright (c) 2014年 zhudm. All rights reserved.
//  滚动视图，支持2-8张图片连续滚动显示

#import <UIKit/UIKit.h>

@protocol BannerViewDelegate <NSObject>
@optional

- (void)eightBannerSelectedDTO:(NSDictionary *)module;

@end

@interface BannerView : UIView <UIScrollViewDelegate>{
    
    UIScrollView    *imageScrollView;
    
    //dto数据源
    NSMutableArray         *dtoArray;
    
    NSTimer         *imageScrollTimer;
    
    //当前
    int             selectedImageIndex;
    
    //scroll需要展示的3个dto
    NSMutableArray         *scrollDataArray;
    
}


//@property (nonatomic, strong) PageControlView244     *pageControlView;
@property (nonatomic, assign) id <BannerViewDelegate>  delegate;
@property (nonatomic, strong) UIPageControl     *pageControl;


/**
 *  依据数据源，更新界面
 *
 *  @param array dto数组
 */
- (void)updateViewWithDTO:(NSArray *)dtoArry;

- (void)invalidTimer;
@end

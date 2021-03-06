//
//  UITabBarController+TLLaunchExtension.h
//  TLChat
//
//  Created by DevelopOne on 2017/9/19.
//  Copyright © 2017年 DevelopOne. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UITabBarController (TLPush)

/**
 *  获取当前VC的navController，并执行push操作
 *
 *  @return 是否成功push
 */
- (BOOL)pushViewController:(UIViewController *)viewController animated:(BOOL)animated;

@end

//
//  UIViewController+NavBar.m
//  TLKit
//
//  Created by DevelopOne on 2017/9/12.
//  Copyright © 2017年 DevelopOne. All rights reserved.
//

#import "UIViewController+NavBar.h"

@implementation UIViewController (NavBar)

- (void)addDismissBarButtonWithTitle:(NSString *)title
{
    __weak typeof(self) weakSelf = self;
    UIBarButtonItem *barButton = [[UIBarButtonItem alloc] initWithTitle:title style:UIBarButtonItemStylePlain actionBlick:^{
        [weakSelf dismissViewControllerAnimated:YES completion:nil];
    }];
    [self.navigationItem setLeftBarButtonItem:barButton];
}

- (void)addLeftBarButtonWithTitle:(NSString *)title actionBlick:(TLBarButtonActionBlock)actionBlock
{
    UIBarButtonItem *barButton = [[UIBarButtonItem alloc] initWithTitle:title style:UIBarButtonItemStylePlain actionBlick:actionBlock];
    [self.navigationItem setLeftBarButtonItem:barButton];
}

- (void)addLeftBarButtonWithImage:(UIImage *)image actionBlick:(TLBarButtonActionBlock)actionBlock
{
    UIBarButtonItem *barButton = [[UIBarButtonItem alloc] initWithImage:image style:UIBarButtonItemStylePlain actionBlick:actionBlock];
    [self.navigationItem setLeftBarButtonItem:barButton];
}

- (void)addRightBarButtonWithTitle:(NSString *)title actionBlick:(TLBarButtonActionBlock)actionBlock
{
    UIBarButtonItem *barButton = [[UIBarButtonItem alloc] initWithTitle:title style:UIBarButtonItemStylePlain actionBlick:actionBlock];
    [self.navigationItem setRightBarButtonItem:barButton];
}

- (void)addRightBarButtonWithImage:(UIImage *)image actionBlick:(TLBarButtonActionBlock)actionBlock
{
    UIBarButtonItem *barButton = [[UIBarButtonItem alloc] initWithImage:image style:UIBarButtonItemStylePlain actionBlick:actionBlock];
    [self.navigationItem setRightBarButtonItem:barButton];
}


@end

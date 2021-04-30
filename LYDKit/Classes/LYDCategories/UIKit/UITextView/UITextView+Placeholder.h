//
//  UITextView+Placeholder.h
//  Pods
//
//  Created by DevelopOne on 2017/9/11.
//
//

#import <UIKit/UIKit.h>

@interface UITextView (Placeholder)

@property (nonatomic, strong, readonly) UITextView *placeholderTextView;

@property (nonatomic, strong) NSString *placeholder;

@end

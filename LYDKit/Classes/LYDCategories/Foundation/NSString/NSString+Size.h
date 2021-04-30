//
//  NSString+Size.h
//  TLKit
//
//  Created by DevelopOne on 2017/9/11.
//  Copyright © 2017年 DevelopOne. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@interface NSString (Size)

- (CGSize)tt_sizeWithFont:(UIFont *)font;

- (CGSize)tt_sizeWithFont:(UIFont *)font constrainedToSize:(CGSize)size;
- (CGSize)tt_sizeWithFont:(UIFont *)font constrainedToWidth:(CGFloat)width;

- (CGSize)tt_sizeWithFont:(UIFont *)font constrainedToSize:(CGSize)size lineBreakMode:(NSLineBreakMode)lineBreakMode;
- (CGSize)tt_sizeWithFont:(UIFont *)font constrainedToWidth:(CGFloat)width lineBreakMode:(NSLineBreakMode)lineBreakMode;

- (CGSize)tt_sizeWithFont:(UIFont *)font constrainedToSize:(CGSize)size lineBreakMode:(NSLineBreakMode)lineBreakMode lineSpace:(CGFloat)lineSpace;

@end

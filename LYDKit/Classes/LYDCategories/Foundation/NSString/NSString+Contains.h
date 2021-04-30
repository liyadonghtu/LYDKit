//
//  NSString+Contains.h
//  TLKit
//
//  Created by DevelopOne on 2017/9/11.
//  Copyright © 2017年 DevelopOne. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSString (Contains)

@property (nonatomic, assign, readonly, getter=isContainEmoji) BOOL containEmoji;

@property (nonatomic, assign, readonly, getter=isContainChinese) BOOL containChinese;

@property (nonatomic, assign, readonly, getter=isContainBlank) BOOL containBlank;

@end

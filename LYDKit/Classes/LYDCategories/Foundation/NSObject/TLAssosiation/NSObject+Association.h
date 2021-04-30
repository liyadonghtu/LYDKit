//
//  NSObject+Association.h
//  TLChat
//
//  Created by DevelopOne on 2017/7/12.
//  Copyright © 2017年 DevelopOne. All rights reserved.
//

#import <Foundation/Foundation.h>

typedef NS_ENUM(NSUInteger, TLAssociation) {
    TLAssociationAssign,
    TLAssociationStrong,
    TLAssociationCopy,
    TLAssociationWeak,
};

@interface NSObject (Association)

/**
 * 根据key添加动态属性，默认noatomic
 */
- (void)setAssociatedObject:(id)object forKey:(NSString *)key association:(TLAssociation)association;

/**
 * 根据key添加动态属性
 */
- (void)setAssociatedObject:(id)object forKey:(NSString *)key association:(TLAssociation)association isAtomic:(BOOL)isAtomic;

/**
 * 根据key获取动态属性
 */
- (id)associatedObjectForKey:(NSString *)key;

@end

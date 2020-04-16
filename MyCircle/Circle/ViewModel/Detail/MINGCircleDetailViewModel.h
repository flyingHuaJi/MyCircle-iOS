//
//  MINGCircleDetailViewModel.h
//  MyCircle
//
//  Created by 周汉明 on 2020/4/15.
//  Copyright © 2020 周汉明. All rights reserved.
//

#import "MINGCircleItem.h"
#import "MINGUser.h"

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface MINGCircleDetailViewModel : NSObject

@property (nonatomic, strong) MINGCircleItem *circleItem;
@property (nonatomic, strong) NSMutableArray<MINGUser *> *circleMenbers;

- (instancetype)initWithCircleItem:(MINGCircleItem *)circleItem;

@end

NS_ASSUME_NONNULL_END
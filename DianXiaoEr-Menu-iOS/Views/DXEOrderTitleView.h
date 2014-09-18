//
//  DXEOrderTitleView.h
//  DianXiaoEr-Menu-iOS
//
//  Created by Joe Shang on 9/18/14.
//  Copyright (c) 2014 Shang Chuanren. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DXEOrderTitleView : UIView

@property (weak, nonatomic) IBOutlet UIView  *contentView;
@property (weak, nonatomic) IBOutlet UILabel *nameTitle;
@property (weak, nonatomic) IBOutlet UILabel *countTitle;
@property (weak, nonatomic) IBOutlet UILabel *priceTitle;

@end
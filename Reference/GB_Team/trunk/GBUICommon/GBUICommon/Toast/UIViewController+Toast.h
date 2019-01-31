//
//  UIViewController+Toast.h
//  GBUICommon
//
//  Created by weilai on 16/9/8.
//  Copyright © 2016年 Go Brother. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIViewController (Toast)

/** 显示loading提示 */
- (void)showLoadingToast;
- (void)showLoadingToastWithText:(NSString *)text;

/** 显示纯文本toast */
- (void)showToastWithText:(NSString *)text;

/** 取消toast */
- (void)dismissToast;

@end
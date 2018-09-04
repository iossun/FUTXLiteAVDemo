//
//  AnswerPlayMsgListTableView.h
//  TXLiteAVDemo
//
//  Created by lijie on 2017/11/22.
//  Copyright © 2017年 Tencent. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "AnswerPlayMsgListTableViewCell.h"

@interface AnswerPlayMsgListTableView : UITableView <UITableViewDelegate, UITableViewDataSource>

// 给消息列表发送一条消息用于展示
- (void)appendMsg:(AnswerPlayMsgModel *)msgModel;

@end

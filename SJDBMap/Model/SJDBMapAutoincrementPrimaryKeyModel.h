//
//  SJDBMapAutoincrementPrimaryKeyModel.h
//  SJProject
//
//  Created by BlueDancer on 2017/6/3.
//  Copyright © 2017年 SanJiang. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface SJDBMapAutoincrementPrimaryKeyModel : NSObject

@property (nonatomic, assign) Class ownerCls;
@property (nonatomic, strong) NSString *ownerFields;

@end

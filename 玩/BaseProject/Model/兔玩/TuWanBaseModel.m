//
//  TuWanBaseModel.m
//  BaseProject
//
//  Created by 秦强波 on 16/9/22.
//  Copyright © 2016年 Tarena. All rights reserved.
//

#import "TuWanBaseModel.h"

@implementation TuWanBaseModel

@end
@implementation TuWanDataModel

+ (NSDictionary *)objectClassInArray{
    return @{@"indexpic" : [TuWanDataIndexpicModel  class], @"list" : [TuWanDataIndexpicInfochildShowitemInfoListModel  class]};
}

@end


@implementation TuWanDataIndexpicModel 

+ (NSDictionary *)objectClassInArray{
    return @{@"showitem" : [TuWanDataIndexpicInfochildShowitemModel  class]};
    }
+(NSDictionary *)replacedKeyFromPropertyName
{
    return @{
          @"atypename":@"typename"
             };
}
@end


@implementation TuWanDataIndexpicInfochildModel 

@end


@implementation TuWanDataIndexpicInfochildShowitemModel 

@end


@implementation TuWanDataIndexpicInfochildShowitemInfoModel 

@end


@implementation TuWanDataIndexpicInfochildShowitemInfoListModel 

+ (NSDictionary *)objectClassInArray{
    return @{@"showitem" : [Showitem class]};
}
+(NSDictionary *)replacedKeyFromPropertyName
{
    return @{
            @"atypename":@"typename"
             };
}
@end


@implementation Infochild

@end


@implementation Showitem

@end


@implementation Info

@end



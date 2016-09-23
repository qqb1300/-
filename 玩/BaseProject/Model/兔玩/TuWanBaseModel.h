//
//  TuWanBaseModel.h
//  BaseProject
//
//  Created by 秦强波 on 16/9/22.
//  Copyright © 2016年 Tarena. All rights reserved.
//

#import "BaseModel.h"



@class TuWanDataModel,TuWanDataIndexpicModel ,TuWanDataIndexpicInfochildModel ,TuWanDataIndexpicInfochildShowitemModel ,TuWanDataIndexpicInfochildShowitemInfoModel ,TuWanDataIndexpicInfochildShowitemInfoListModel ,Infochild,Showitem,Info;
@interface TuWanBaseModel : BaseModel
@property (nonatomic, copy) NSString *msg;

@property (nonatomic, strong) TuWanDataModel *data;

@property (nonatomic, copy) NSString *code;
@end
@interface TuWanDataModel : NSObject

@property (nonatomic, strong) NSArray<TuWanDataIndexpicModel  *> *indexpic;

@property (nonatomic, strong) NSArray<TuWanDataIndexpicInfochildShowitemInfoListModel  *> *list;

@end

@interface TuWanDataIndexpicModel  : NSObject

@property (nonatomic, copy) NSString *color;

@property (nonatomic, copy) NSString *source;

@property (nonatomic, copy) NSString *showtype;

@property (nonatomic, copy) NSString *title;

@property (nonatomic, copy) NSString *click;

@property (nonatomic, copy) NSString *url;

@property (nonatomic, copy) NSString *typechild;

@property (nonatomic, copy) NSString *longtitle;

@property (nonatomic, copy) NSString *atypename;

@property (nonatomic, copy) NSString *html5;

@property (nonatomic, copy) NSString *toutiao;

@property (nonatomic, strong) TuWanDataIndexpicInfochildModel  *infochild;

@property (nonatomic, copy) NSString *litpic;

@property (nonatomic, copy) NSString *aid;

@property (nonatomic, assign) NSInteger pictotal;

@property (nonatomic, strong) NSArray<TuWanDataIndexpicInfochildShowitemModel  *> *showitem;

@property (nonatomic, copy) NSString *pubdate;

@property (nonatomic, copy) NSString *type;

@property (nonatomic, copy) NSString *timestamp;

@property (nonatomic, copy) NSString *murl;

@property (nonatomic, copy) NSString *banner;

@property (nonatomic, assign) NSInteger zangs;

@property (nonatomic, copy) NSString *writer;

@property (nonatomic, copy) NSString *timer;

@property (nonatomic, copy) NSString *comment;

@property (nonatomic, copy) NSString *description;

@end

@interface TuWanDataIndexpicInfochildModel  : NSObject

@property (nonatomic, copy) NSString *later;

@property (nonatomic, copy) NSString *cn;

@property (nonatomic, copy) NSString *facial;

@property (nonatomic, copy) NSString *feature;

@property (nonatomic, copy) NSString *role;

@property (nonatomic, copy) NSString *shoot;

@end

@interface TuWanDataIndexpicInfochildShowitemModel  : NSObject

@property (nonatomic, copy) NSString *pic;

@property (nonatomic, copy) NSString *text;

@property (nonatomic, strong) TuWanDataIndexpicInfochildShowitemInfoModel  *info;

@end

@interface TuWanDataIndexpicInfochildShowitemInfoModel  : NSObject

@property (nonatomic, copy) NSString *width;

@property (nonatomic, assign) NSInteger height;

@end

@interface TuWanDataIndexpicInfochildShowitemInfoListModel  : NSObject

@property (nonatomic, copy) NSString *color;

@property (nonatomic, copy) NSString *source;

@property (nonatomic, copy) NSString *showtype;

@property (nonatomic, copy) NSString *title;

@property (nonatomic, copy) NSString *click;

@property (nonatomic, copy) NSString *url;

@property (nonatomic, copy) NSString *typechild;

@property (nonatomic, copy) NSString *longtitle;

@property (nonatomic, copy) NSString *atypename;

@property (nonatomic, copy) NSString *html5;

@property (nonatomic, copy) NSString *toutiao;

@property (nonatomic, strong) Infochild *infochild;

@property (nonatomic, copy) NSString *litpic;

@property (nonatomic, copy) NSString *aid;

@property (nonatomic, assign) NSInteger pictotal;

@property (nonatomic, strong) NSArray<Showitem *> *showitem;

@property (nonatomic, copy) NSString *pubdate;

@property (nonatomic, copy) NSString *type;

@property (nonatomic, copy) NSString *timestamp;

@property (nonatomic, copy) NSString *murl;

@property (nonatomic, copy) NSString *banner;

@property (nonatomic, assign) NSInteger zangs;

@property (nonatomic, copy) NSString *writer;

@property (nonatomic, copy) NSString *timer;

@property (nonatomic, copy) NSString *comment;

@property (nonatomic, copy) NSString *description;

@end

@interface Infochild : NSObject

@property (nonatomic, copy) NSString *later;

@property (nonatomic, copy) NSString *cn;

@property (nonatomic, copy) NSString *facial;

@property (nonatomic, copy) NSString *feature;

@property (nonatomic, copy) NSString *role;

@property (nonatomic, copy) NSString *shoot;

@end

@interface Showitem : NSObject

@property (nonatomic, copy) NSString *pic;

@property (nonatomic, copy) NSString *text;

@property (nonatomic, strong) Info *info;

@end

@interface Info : NSObject

@property (nonatomic, copy) NSString *width;

@property (nonatomic, assign) NSInteger height;

@end


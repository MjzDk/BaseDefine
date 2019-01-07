//
//  BaseDefine.h
//  Jide
//
//  Created by mini on 2019/1/7.
//  Copyright © 2019 jide. All rights reserved.
//

#ifndef BaseDefine_h
#define BaseDefine_h
//判断机型
#define Is_iphone (UI_USER_INTERFACE_IDIOM() == UIUserInterfaceIdiomPhone)
#define Is_iPhoneX SCREEN_WIDTH >=375.0f && SCREEN_HEIGHT >=812.0f&& Is_iphone

//屏幕宽 高
#define SCREEN_WIDTH [UIScreen mainScreen].bounds.size.width
#define SCREEN_HEIGHT [UIScreen mainScreen].bounds.size.height
#define SCREEN_BOUNDS [UIScreen mainScreen].bounds

//window
#define keyWindow [UIApplication sharedApplication].keyWindow

//状态栏高度
#define StatusHeight [[UIApplication sharedApplication] statusBarFrame].size.height

//tabbar高度
#define TabBarHeight (CGFloat)(Is_iPhoneX?(49.0 + 34.0):(49.0))

//弱引用/强引用
#define WeakSelf(type)  __weak typeof(type) weak##type = type;
#define StrongSelf(type)  __strong typeof(type) type = weak##type;

//设置RGB颜色/设置RGBA颜色========================
#define RGB(r, g, b) [UIColor colorWithRed:(r)/255.0 green:(g)/255.0 blue:(b)/255.0 alpha:1.0]
#define RGBA(r, g, b, a) [UIColor colorWithRed:(r)/255.0 green:(r)/255.0 blue:(r)/255.0 alpha:a]
#define RGB16(rgbValue) [UIColor colorWithRed:((float)((rgbValue & 0xFF0000) >> 16))/255.0 green:((float)((rgbValue & 0xFF00) >> 8))/255.0 blue:((float)(rgbValue & 0xFF))/255.0 alpha:1.0]
#define RGB16A(rgbValue, a) [UIColor colorWithRed:((float)((rgbValue & 0xFF0000) >> 16))/255.0 green:((float)((rgbValue & 0xFF00) >> 8))/255.0 blue:((float)(rgbValue & 0xFF))/255.0 alpha:a]

//判断字符串 数组 字典=========================
#define CheckString(string)                 (string != nil && ![string isKindOfClass:[NSNull class]] && string.length > 0&& ![string isEqualToString:@"<null>"]&&![string isEqualToString:@"(null)"])
#define CheckDictionary(dic)                (dic != nil && ![dic isKindOfClass:[NSNull class]] && dic.count > 0)
#define StringFormat(string, args...)       [NSString stringWithFormat:string, args]
#define CheckArray(array)                   (array != nil && ![array isKindOfClass:[NSNull class]] && array.count > 0)


//菊花========================================================
//显示菊花
#define showHUDAndActivity(str,view)\
MBProgressHUD *hud = [MBProgressHUD showHUDAddedTo:view animated:YES];\
hud.mode = MBProgressHUDModeIndeterminate; \
hud.bezelView.color = RGB(222.0, 224.0, 226.0); \
hud.label.textColor = RGB(64.0, 64.0, 64.0); \
hud.label.font = [UIFont systemFontOfSize:13]; \
if (str.length > 0) {    \
hud.label.text = str;\
} else {    \
hud.label.text = @"  加载中...  ";  \
}   \
//隐藏菊花
#define hiddenMBHUD(view) [MBProgressHUD hideHUDForView:view animated:YES];

#endif /* BaseDefine_h */

//
//  Macros.h
//  SKToolDemo
//
//  Created by sunke on 14-12-18.
//  Copyright © 2014 sunke. All rights reserved.
//

#ifndef Macros_h
#define Macros_h

/*自动提示宏*/
#define keyPath(objc, keyPath) @(((void)objc.keyPath, #keyPath))


/** 屏幕高度 */
#define SKScreenH [UIScreen mainScreen].bounds.size.height
/** 屏幕宽度 */
#define SKScreenW [UIScreen mainScreen].bounds.size.width

// 弱引用
#define SKWeakSelf __weak typeof(self) weakSelf = self;

#define PFR [[[UIDevice currentDevice] systemVersion] floatValue] >= 9.0 ? @"PingFangSC-Regular" : @"PingFang SC"

#define PFR15Font [UIFont fontWithName:PFR size:15];
#define PFR14Font [UIFont fontWithName:PFR size:14];
#define PFR13Font [UIFont fontWithName:PFR size:13];

/** 色值 **/
#define SKColorA(r,g,b,a) [UIColor colorWithRed:r/255.0f green:g/255.0f blue:b/255.0f alpha:a]
//#define SKColor(r,g,b) [UIColor colorWithRed:(r)/255.0 green:(g)/255.0 blue:(b)/255.0 alpha:1]
#define SKColor(r,g,b) SKColorA(r,g,b,1.0f)

#define SKHexColor(hex) [UIColor colorWithRed:((float)((hex & 0xFF0000) >> 16)) / 255.0 green:((float)((hex & 0xFF00) >> 8)) / 255.0 blue:((float)(hex & 0xFF)) / 255.0 alpha:1]

#define SKGlobeColor SKColor(215, 215, 215)
//随机色
#define SKRandomColor SKColor(arc4random_uniform(255), arc4random_uniform(255), arc4random_uniform(255))


//全局背景色
#define SKBGColor RGB(245,245,245)


/* 打印 */
#ifdef __OBJC__
#define SKLog(...) NSLog(@"%s %d行\n %@\n\n",__func__,__LINE__,[NSString stringWithFormat:__VA_ARGS__])
#endif

// 自定义函数打印
#define SKFunc SKLog(@"%s",__func__)

// ...:宏里面可变参数
#ifdef DEBUG // 调试
#define SKLog(...) NSLog(__VA_ARGS__);

#else // 发布
#define SKLog(...)
#endif

//确保在主线程的宏
#ifndef dispatch_main_async_safe
#define dispatch_main_async_safe(block)\
if (dispatch_queue_get_label(DISPATCH_CURRENT_QUEUE_LABEL) == dispatch_queue_get_label(dispatch_get_main_queue())) {\
block();\
} else {\
dispatch_async(dispatch_get_main_queue(), block);\
}
#endif

//dispatch_semaphore 线程加锁
#ifndef LOCK
#define LOCK(lock) dispatch_semaphore_wait(lock, DISPATCH_TIME_FOREVER);
#endif

#ifndef UNLOCK
#define UNLOCK(lock) dispatch_semaphore_signal(lock);
#endif

#ifndef LOCKBLOCK
#define LOCKBLOCK(...) dispatch_semaphore_wait(self->_lock, DISPATCH_TIME_FOREVER); \
__VA_ARGS__; \
dispatch_semaphore_signal(self->_lock);


#endif /* Macros_h */

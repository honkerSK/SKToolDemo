

#pragma mark ================== 快速创建属性 ======================
#pragma mark - assign
@property (nonatomic, assign) <#type#> <#name#>;

#pragma mark - copy
@property (nonatomic, copy) <#type#> *<#name#>;

#pragma mark - retain
@property (nonatomic, retain) <#type#> *<#name#>;

#pragma mark - strong
@property (nonatomic, strong) <#type#> *<#name#>;

#pragma mark - weak
@property (nonatomic, weak) <#type#> *<#name#>;


#pragma mark - 自动提示宏
#define keyPath(objc, keyPath) @(((void)objc.keyPath, #keyPath))



#pragma mark - initWithCoder -通过xib,stroyboar加载控制器
- (instancetype)initWithCoder:(NSCoder *)aDecoder {
    if (self = [super initWithCoder:aDecoder]) {
        
    }
    return self;
}


#pragma mark - initWithFrame -代码初始化控件
- (instancetype)initWithFrame:(CGRect)frame {
    if (self = [super initWithFrame:frame]) {
        
    }
    return self;
    
}

#pragma mark - xib初始化方法
- (void)awakeFromNib {
    [super awakeFromNib];
    
}

#pragma mark - 多线程延迟
dispatch_after(dispatch_time(DISPATCH_TIME_NOW, Int64(<#time#> * Double(NSEC_PER_SEC))), <#T##queue: dispatch_queue_t##dispatch_queue_t#>, <#T##block: dispatch_block_t##dispatch_block_t##() -> Void#>)


#pragma mark - 简易懒加载
- <#name#>{
    if (!_<#name#>) {
        _<#name#> = [[<#class#> alloc]init];
    }
    return _<#name#>;
}


#pragma mark - 类扩展
@interface <#className#>()


@end

#pragma mark - 自定义枚举
typedef NS_ENUM(NSUInteger, <#typeName#>) {
    <#enumList#>
};

#pragma mark - 自动布局子控件 -layoutSubviews
- (void)layoutSubviews {
    [super layoutSubviews];
    
}


#pragma mark - 抛出异常
do {
    try <#func#>
}catch {
    
}

#pragma mark - randomColor 随机色方法
- (UIColor *)randomColor {
    CGFloat red = arc4random_uniform(256) / 255.0;
    CGFloat green = arc4random_uniform(256) / 255.0;
    CGFloat blue = arc4random_uniform(256) / 255.0;
    
    return [UIColor colorWithRed:red green:green blue:blue alpha:1.0];
}


#pragma mark ================== swift ======================

#pragma mark mark标记
//MARK:- <#mark标记#>

#pragma mark - 可选绑定
guard let <#name#> = <#name#> else {
    return
}

#pragma mark - 快速创建类
class func <#name#> {
    <#code#>
}

#pragma mark - 自定义log -全局函数
func SKLog<T>(message :T , file: String = #file, lineNum:Int = #line) {
#if DEBUG
    let filePath = (file as NSString).lastPathComponent
    print("\(filePath)-[\(lineNum)]:\(message)")
#endif
}


#pragma mark ================== <#注释内容#> ======================

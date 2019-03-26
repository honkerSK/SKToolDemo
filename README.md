# SKToolDemo

## Const(常量)

| SKConsts.h | 常用常量 |
| ---------- | -------- |
|            |          |



## Macros(宏)

| Macros.h       | 常用宏       |
| -------------- | ------------ |
| CodeSnippets.h | 快速创建属性 |
| Single.h       | 单例宏       |

​	


## Foundation

### NSArray

|  NSArray分类    |  功能             |
| -------------------- | ------------------ |
|NSArray+SKBlock |遍历 |
| NSArray+SKLog        | 用来控制数组的输出 |
| NSArray+SKSafeAccess | 过滤               |

### NSDictionary

| NSDictionary分类      | 功能                            |
| ------------------------- | ------------------------------- |
|NSDictionary+SKBlock   |遍历|
| NSDictionary+SKSafeAccess | 过滤                            |
| NSDictionary+SKMerge      | 合并与插入                      |
| NSDictionary+SKJSONString | NSDictionary转换成JSON字符串    |
| NSDictionary+SKURL        | url字符串与NSDictionary相互转换 |
| NSDictionary+SKXML        | NSDictionary转换成XML字符串     |
| NSDictionary+SKLog        | 控制字典的输出                  |



### NSString

|     NSString分类        |       功能                               |
| -------------------------- | ----------------------------------------------------- |
|NSString+SKSize|计算文字的frame |
| NSString+SKEmoji           | Emoji编码 转化为相匹配的unicode字符                   |
| NSString+SKRemoveEmoji     | 移除emoji                                             |
| NSString+SKTrims           | 清除html标签 , 清除js脚本, 去除空格, 去除字符串与空行 |
| NSString+SKDictionaryValue | JSON字符串转成NSDictionary                            |
| NSString+SKURLEncode | url转码 UTF8 |
| NSString+SKHash | MD5 和 hash |
| NSString+SKUUID | 获取随机 UUID 和 毫秒时间戳 |
| NSString+SKScore | 模糊匹配字符串 查找某两个字符串的相似程度 |
| NSString+SKEncrypt | 加密解密 |
| NSString+SKBase64 | Base64 |
| NSString+SKMIME | 获取对应的MIMEType |
| NSString+SKNormalRegex | 正则表达式 |
| NSString+SKXMLDictionary | xml字符串转换成NSDictionary |
| NSString+SKPinyin | NSString的中文拼音字符串 |
| NSString+SKMatcher |                                                       |
| NSString+SKStringPages | 根据字符串进行分页 |
| NSString+SKHTML | 包含HTML的NSStrings实用程序 |
| NSString+SKUnicode | Unicode与UTF8互转、URL编码和解码 |
| NSString+SKContains | URL中是否包含中文 , 是否包含空格, 是否包含字符串, 获取字符数量 |



### NSData

| NSData分类         | 功能                                  |
| ------------------ | ------------------------------------- |
| NSData+SKBase64    | Base64                                |
| NSData+SKEncrypt   | 加密解密                              |
| NSData+SKHash      | MD5 , Hash                            |
| NSData+SKGzip      | GZIP压缩 解压                         |
| NSData+SKDataCache | 缓存保存                              |
| NSData+SKzlib      | zlib压缩                              |
| NSData+SKAPNSToken | 将APNS NSData类型token 格式化成字符串 |
|NSData+SKPCM|格式化 wav|

### NSTimer

| NSTimer分类        | 功能             |
| ------------------ | ---------------- |
| NSTimer+SKBlock    |                  |
| NSTimer+SKAddition | 开始 暂停NSTimer |



### NSObject

| NSObject分类                | 功能                                        |
| --------------------------- | ------------------------------------------- |
| NSObject+SKReflection       | 映射                                        |
| NSObject+SKEasyCopy         | 浅复制目标的所有属性 , 深复制目标的所有属性 |
| NSObject+SKAppInfo          | 获取App属性                                 |
| NSObject+SKBlock            | dispatch_after 封装                         |
| NSObject+SKAssociatedObject | runtime 附加一个stong weak对象              |
| NSObject+SKAddProperty      | runtime 增加属性                            |
| NSObject+SKRuntime          | runtime 封装                                |
| NSObject+SKKVOBlock         | KVO封装                                     |
| NSObject+SKBlockTimer       | 计时器                                      |
| NSObject+SKGCD              | GCD封装                                     |



### NSRunLoop

| NSRunLoop分类            | 功能更         |
| ------------------------ | -------------- |
| NSRunLoop+SKPerformBlock | NSRunLoop 封装 |



### NSURLSession

| NSURLSession分类               | 功能     |
| ------------------------------ | -------- |
| NSURLSession+SKSynchronousTask | 同步任务 |



### NSUserDefaults

| NSUserDefaults分类          | 功能                                                         |
| --------------------------- | ------------------------------------------------------------ |
| NSUserDefaults+SKSafeAccess | 获取对应名                                                   |
| NSUserDefaults+SKiCloudSync | 用于将NSUserDefaults与iCloud同步（NSUbiquitousKeyValueStore） |



### NSFileManager

| NSFileManager分类     | 功能                      |
| --------------------- | ------------------------- |
| NSFileManager+SKPaths | NSFileManager获取对应路径 |





## UIKit  

### UIView

| UIView+SKFrame | 计算frame |
| -------------- | --------- |
|                |           |
|                |           |


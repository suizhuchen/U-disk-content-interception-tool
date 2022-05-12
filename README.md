U-disk-content-interception-tool
===
*Get files from U disk secretly/从U盘中悄悄的获取文件*
---
**From now on, I'll use Chinese.**

**这是一个从U盘获取文件的软件**

本文将分为以下3部分介绍此项目
	1.开发的原因
	2.软件原理及使用
	3.其他

1.开发的原因
	究其原因，我还得感谢我的语文老师。她做的PPT虽算不上精美，但充满干货。我的初衷就是为了复习，但是每次我找她要PPT，她都只给一张图片。这样既不方便我整理，也不方便背诵。于是，借助我容易接近电脑的身份，我很快开发了一个简陋的PPT截取工具。但是功能很少，代码也不够完善，并且当初我是用的易语言进行开发，其特征码容易被某些杀毒软件错误识别成为病毒。我不断完善功能，在巅峰时刻甚至已经做到了添加了关机、蓝屏，并创建了托盘。

​	但是信息老师的一次检查，让我收敛了许多，虽然继续使用易语言开发，但是我将软件的许多不必要的功能删除。在最后一版易语言开发后，我将编程平台更改为火山软件开发平台，并重写了代码，删除了诸多功能，只保留复制的功能。我认为，更好的复习能带来更好的成绩，所以，我想让更多同学能更好的复习，所以我将它传到了Github。

2.软件原理及使用

​	emmm，怎么说呢，就是检测U盘插入，在U盘中枚举所需格式的文件，并将其复制到本地磁盘的12321文件夹下对应日期的文件夹，一般选择D盘，如<kbd>D:\12321\2022-5-12</kbd>这个文件夹（火山版本为<kbd>D:\12321\2022年5月12日</kbd>)。复制完成后，自动打开对应盘符的资源管理器。只需要在别人插入U盘前，打开此软件，等待运行结束后手动结束程序，然后复制到自己的U盘里就好了。

3.其他

​	如果有bug或者改进建议，您可以发邮件到我的email。当然，您可以自行修改源代码，添加您喜欢的功能（如果有能力的话）。您也可以使用编译好的软件，我会将其上传至release文件夹。

​	现在已编译版本中已经支持docx,doc,pptx,ppt,xlsx,xls,pdf文件，您也可以自行添加。

​	易语言版本会上传最后一次更新的版本，源码格式为<kbd>.e</kbd>，并且会上传一些看起来无关紧要的东西：配置生成工具与配置安装器。也就是说易语言版本可以进行配置自定义，并且必须进行自定义；火山版本会持续上传更新，项目文件格式为<kbd>.vsln</kbd>，但是其中没有其他那些看起来无关紧要的东西，文件格式在程序中，以文本数组储存；C++版本为火山版本编译时生成，具体的我也没看过，因为我不太会C++。

​	联系方式：

- QQ:3143709511
- Email:lyfdacallmain@163.com

**_114514_**
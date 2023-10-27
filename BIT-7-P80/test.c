#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//3.4 命令行定义
/*
许多C 的编译器提供了一种能力，允许在命令行中定义符号。用于启动编译过程。
例如：当我们根据同一个源文件要编译出一个程序的不同版本的时候，这个特性有点用处。（假定某个
程序中声明了一个某个长度的数组，如果机器内存有限，我们需要一个很小的数组，但是另外一个机器
内存大些，我们需要一个数组能够大些。）
*/

/*//linux 环境演示
int main()
{
	int array[ARRAY_SIZE];
	int i = 0;
	for (i = 0; i < ARRAY_SIZE; i++)
	{
		array[i] = i;
	}
	for (i = 0; i < ARRAY_SIZE; i++)
	{
		printf("%d ", array[i]);
	}
	printf("\n");
	return 0;
}
//编译指令
gcc - D ARRAY_SIZE = 10 programe.c
*/


//3.5 条件编译
/*
在编译一个程序的时候我们如果要将一条语句（一组语句）编译或者放弃是很方便的。因为我们有条件编译指令。
比如说：
调试性的代码，删除可惜，保留又碍事，所以我们可以选择性的编译
*/

//#define __DEBUG__	
int main()
{
	int i = 0;
	int arr[10] = { 0 };
	for (i = 0; i < 10; i++)
	{
		arr[i] = i;

#ifdef __DEBUG__	//如果定义了__DEBUG__则执行编译
		printf("%d\n", arr[i]);//为了观察数组是否赋值成功。
#endif //__DEBUG__

	}
	return 0;
}

//常见的条件编译指令：
/*
1.#if 常量表达式
//...
#endif
//常量表达式为真则编译，为假则不编译
如：
#define __DEBUG__ 1
#if __DEBUG__
//..
#endif
*/

/*
2.多个分支的条件编译
#if 常量表达式
//...
#elif 常量表达式
//...
#else
//...
#endif
*/

/*
3.判断是否被定义
#if defined(symbol)
#ifdef symbol
#if !defined(symbol)
#ifndef symbol
*/

/*
4.嵌套指令
#if defined(OS_UNIX)
	#ifdef OPTION1
		unix_version_option1();
	#endif
	#ifdef OPTION2
		unix_version_option2();
	#endif
#elif defined(OS_MSDOS)
	#ifdef OPTION2
		msdos_version_option2();
	#endif
#endif
*/


//3.6 文件包含
//#include 指令可以使另外一个文件被编译
/*
这种替换的方式很简单：
预处理器先删除这条指令，并用包含文件的内容替换。
这样一个源文件被包含10次，那就实际被编译10次

*/
//3.6.1 头文件被包含的方式：
//本地文件包含	#include "filename.h"
/*
查找策略：先在源文件所在目录下查找，如果该头文件未找到，编译器就像查找库函数头文件一样在标
准位置查找头文件。
如果找不到就提示编译错误。

Linux环境的标准头文件的路径：
/usr/include

VS环境的标准头文件的路径:
C:\Program Files (x86)\Microsoft Visual Studio 12.0\VC\include
//这是VS2013的默认路径
*/

//库文件包含	#include <filename.h>
/*
查找头文件直接去标准路径下去查找，如果找不到就提示编译错误。
这样是不是可以说，对于库文件也可以使用 “” 的形式包含？
答案是肯定的，可以。
但是这样做查找的效率就低些，当然这样也不容易区分是库文件还是本地文件了
*/

//3.6.2 嵌套文件包含----头文件重复包含
//文件内容的重复
//防止重复包含
#ifndef __TEST_H__
#define __TEST_H__
//头文件的内容
#endif //__TEST_H

//或者：
#pragma once	//就可以避免头文件的重复引入。

/*
推荐《高质量C/C++编程指南》中附录的考试试卷（很重要）。
笔试题：
1. 头文件中的 ifndef/define/endif是干什么用的?
2. #include <filename.h> 和 #include "filename.h"有什么区别?
*/

//4. 其他预处理指令
/*
#error
#pragma
#line
...

#pragma pack()在结构体部分介绍
//参考《C语言深度解剖》学习
*/


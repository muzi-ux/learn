#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

// 初始C语言关键字
/*
auto break case char const continue default
do double else enum extern float for goto
if int long egister return short signed sizeof
static struct switch typedef union unsigned
void volatile while

1999年12月16日，ISO推出了C99标准，该标准新增了5个C语言关键字：
inline restrict _Bool _Complex _Imaginary

2011年12月8日，ISO发布C语言的新标准C11，该标准新增了7个C语言关键字：
_Alignas _Alignof _Atomic _Static_assert _Noreturn _Thread_local _Generic
*/

int sum()
{
	int i = 0; // 未使用static修饰的局部变量会随着函数的的结束而被销毁
	static a = 0;// 使用static修饰的局部变量不会随着函数的结束而销毁
	a++;
	i++;

	printf("i = %d\n", i);
	printf("a = %d\n", a);
	return -1;
}

//int main()
int m10()
{
	// 未使用static修饰的全局变量是可以正常调用的
	extern int c;
	// 使用static修饰的全局变量??????
	extern int z;
	// 本例主要使用 static default
	printf("int c = %d\n", c);
	printf("int z = %d\n", c);

	// 未使用static修饰的全局方法
	extern int test(int, int);
	printf("test = %d\n", test(1,2));

	// 使用static修饰的方法
	extern int tests(int, int);
	// printf("tests = %d\n", tests(1, 3)); //编译器抛出异常，无法识别tests函数，使用static修饰后的函数只有内部链接属性，失去了全局链接属性

	while (c < 10)
	{
		sum();
		c++;
	}
	return -1;
}
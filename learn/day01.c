#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

// 变量的作用域合生命周期
 

// 局部变量的只在它所在的区域有用
// 全局变量在整个工程内都有用

// 局部变量的生命周期：随着局部被创建而创建，随者离开局部而失活
// 全局变量的生命周期：就是程序的生命周期

// 这个是全局变量
int a = 2;
// 跨文件调用全局变量是需要先声明这个变量才可以调用不然会报错
extern int c;

void t1()
{
	// 这个是局部变量
	int b = 1;

	printf("变量b在这里可以使用,b = %d\n", b);
	printf("变量a在这里是可以使用的,a = %d\n", a);

	return;
}

//int main()
int m1()
{
	
	// printf("变量b在这里会失去作用,b = %d\n", b);
	printf("变量a在这里是也是可以使用的,a = %d\n", a);
	t1();

	printf("这里调用的是全局变量c, c = %d", c);

	return 0;
}

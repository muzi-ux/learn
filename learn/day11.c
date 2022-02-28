#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

// 指针就是地址（内存地址）
//int main()
int m11()
{
	int i = 1;
	int* ip = &i;

	printf("int* ip = %p\n", ip);
	// 当使用32位调试时 sizeof(int*)的长度为4，使用64位系统调试时长度为8
	// 指针的长度一般取决于内存地址的位数
	printf("int* = %d\n", sizeof(int*) );
	return 0;
}
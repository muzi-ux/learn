#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#define MIN  100
// 常量
/*
	1. #define修饰的标识符常量
	2. const修饰的常变量
	3. 枚举常量
	4. 字面常量

	表示符常量在编译期标识符就会被替换为常量值
	常变量 也是变量只是在赋值后无法再次赋值改变变量内部保存的值

	标识符常量在定义时无需使用等号赋值

	枚举常量内的值是从零开始依次递增一，也可以在定义是手动赋值
*/



enum Mi
{
	ONE = 5,
	TWO = 9,
	THERE = 10
};

//int main()
int m2()
{
	const c = 1;

	printf("这是一个枚举常量: %d\n", ONE);
	printf("这是一个枚举常量: %d\n", TWO);
	printf("这是一个枚举常量: %d\n", THERE);
	printf("这是一个const修饰的常量: %d\n", c);
	printf("这是一个define修饰的常量: %d\n", MIN);
	printf("这是一个字面修饰的常量: 10\n");
	/*
	这是一个枚举常量: 5
	这是一个枚举常量: 9
	这是一个枚举常量: 10
	这是一个const修饰的常量: 1
	这是一个define修饰的常量: 100
	这是一个字面修饰的常量: 10
	*/

	return 0;
}
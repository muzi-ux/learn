#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

// 初始数组和函数

// 函数有 返回值类型 函数名 参数列表 函数体构成
// 返回值类型规定了这个函数可以返回什么类型的数据
// 函数的名称规定了可以通知该名称调用此函数
// 参数规定了可以传入函数提体内的数据，参数也有数据类型限制，参数的类型规定了可以接受什么类型的参数
// 函数体对数据进行处理并按照指定类型返回
int Sum(int x, int y)
{
	int num;
	num = x + y;
	return num;
}

//int main()
int m7()
{
	// 数组,是一组类型相同的数据的集合
// 数组有一下四种创建方式
// int 为数组的类型 arr 为数组的名称 [3]为数组的长度
// 可以通过指定不同的数据类型创建不同类型的数组
// 通过数组的名称来调用数组
// 数组的长度规定了可以存放数据的多少
	int arr[8]; // 声明一个长度为8的数组
	int arr1[3] = { 1, 2, 3 }; // 声明一个长度为3的数组并初始化
	int arr2[6] = { 1, 2, 3 }; // 声明一个长度为6的数组并进行不完全初始化
	int arr3[] = { 1, 3, 5, 8 }; // 声明一个数组，数组的长度由后面初始化值的数量决定


	int number1, number2;
	printf("please enter the first number: ");
	scanf("%d", &number1);
	printf("please enter a second number: ");
	scanf("%d", &number2);
	printf("the sum of two number is: %d", Sum(number1, number2));
	return 0;
}

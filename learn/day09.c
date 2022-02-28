#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
// c语言操作符（不完全）
// ? : 三木运算符
// , 逗号表达式
// [] 下标引用
// () 函数调用

//int main()
int m9()
{
	int a, b, max;
	a = 1;
	b = 2;
	if (a > b)
	{
		max = a;
	}
	else
	{
		max = b;
	}
	// 这个表达式效果等同于上面的if判断
	// 如果表达式成立则吧a的值赋给max否则吧b的值赋给max
	max = a > b ? a : b;
	printf("max = %d\n", max);

	// 逗号表达式
	int c = 1, d = 2, e = 3;
	// 等号右侧的表达式会从左向右计算，将最后一个表达式的结果赋值给等号左边的变量
	max = (c = d + 1, d = c + 1, e = d - 4);
	printf("max = %d\n", max);

	// []下标应用，方括号内写的就是数组的下标
	int arr[] = { 1, 2, 4 };
	printf("arr[2] = %d\n", arr[2]);
	return 0;
}
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
// 选择结构

//int main() 
int m5()
{
	int x;
	printf("你想要中彩票吗(1/0)：");
	scanf("%d",&x);

	// 判断结构，if为判断的关键字，括号内是需要进行判断的条件，
	// 当满足条件时就会执行if下面的代码块
	// 当不满足条件时会执行else下面的代码块
	// else 是可选的
	if (x == 1)
	{
		printf("都2022年了还有人做这种梦\n");
	}
	else 
	{
		printf("人总要有点追求的\n");
	}

	// 这也是判断结构
	if (1 < 2)
	{
		printf("真聪明\n");
	}
	return 0;
}
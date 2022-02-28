#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

// c循环

//int main() 
int m6()
{
	char c;
	// do...while循环，是先执行do后面的代码块内的代码之后在知行while后的判断
	// 所以不管条件是否成立do内的代码一定会执行一次
	do
	{
		printf("你想查看for循环吗(y/n):");
		scanf("%s", &c);
	} while (c == 'n');

	// for循环 for关键字后的括号内需要存在三个条件
	// 初始化条件
	// 条件判断
	// 条件自增
	// 条件自增后执行代码块内的内容，代码块内内容执行完毕后再次进行判断，如果条件成立则再次执行循环，直到条件不成立则跳出循环
	int i;
	for (i = 0; i < 6; i++)
	{
		printf("I am for\n");
	}

	// while循环一般用于无限循环(死循环)
	// while关键字后面的括号内是需要进行判断的条件，如果条件成立则执行代码块呢容，不成立则跳出循环
	while (1) {
		printf("如果你不想看到了就cat+c终止掉\n");
	}
	return 0;
}
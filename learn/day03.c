#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>

// 字符串

// 由于c语言内没有字符串这种数据类型一般是通过char型数组定义
char arr[] = "hello";
char arr1[] = { 'h', 'e', 'l', 'l', 'o' };

// 使用vs2022断点调试是可以看到arr数组的末尾有\0字符，arr1数组的末尾没有\0
// 在打印时arr于arr1的打印结果皆为“hello”并没有出现本人在视频上看到的“hello”后有乱码的情况
// 随后使用mingw编译器打印时也是只有“hello”，初步怀疑是编译器优化
// \0不会算作字符串的长度计算

// 字符串的结束标识为\0 在使用printf函数打印时arr1的长度是随机数，arr1的长度是5(这是本人看视频的打印结果)
// 实际使用vs2022打印时两个字符串的长度皆为5
// 断点调试显示len和len1的值皆为5
//int main()
int m3()
{
	printf("%s\n", arr);
	printf("%s\n", arr1);

	int len = strlen(arr);
	int len1 = strlen(arr);

	printf("arr length: %d\n", len);
	printf("arr1 length: %d\n", len1);
	return 0;
}
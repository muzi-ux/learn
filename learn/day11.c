#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

// ָ����ǵ�ַ���ڴ��ַ��
//int main()
int m11()
{
	int i = 1;
	int* ip = &i;

	printf("int* ip = %p\n", ip);
	// ��ʹ��32λ����ʱ sizeof(int*)�ĳ���Ϊ4��ʹ��64λϵͳ����ʱ����Ϊ8
	// ָ��ĳ���һ��ȡ�����ڴ��ַ��λ��
	printf("int* = %d\n", sizeof(int*) );
	return 0;
}
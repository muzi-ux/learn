#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>

// �ַ���

// ����c������û���ַ���������������һ����ͨ��char�����鶨��
char arr[] = "hello";
char arr1[] = { 'h', 'e', 'l', 'l', 'o' };

// ʹ��vs2022�ϵ�����ǿ��Կ���arr�����ĩβ��\0�ַ���arr1�����ĩβû��\0
// �ڴ�ӡʱarr��arr1�Ĵ�ӡ�����Ϊ��hello����û�г��ֱ�������Ƶ�Ͽ����ġ�hello��������������
// ���ʹ��mingw��������ӡʱҲ��ֻ�С�hello�������������Ǳ������Ż�
// \0���������ַ����ĳ��ȼ���

// �ַ����Ľ�����ʶΪ\0 ��ʹ��printf������ӡʱarr1�ĳ������������arr1�ĳ�����5(���Ǳ��˿���Ƶ�Ĵ�ӡ���)
// ʵ��ʹ��vs2022��ӡʱ�����ַ����ĳ��Ƚ�Ϊ5
// �ϵ������ʾlen��len1��ֵ��Ϊ5
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
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
// c���Բ�����������ȫ��
// ? : ��ľ�����
// , ���ű��ʽ
// [] �±�����
// () ��������

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
	// ������ʽЧ����ͬ�������if�ж�
	// ������ʽ�������a��ֵ����max�����b��ֵ����max
	max = a > b ? a : b;
	printf("max = %d\n", max);

	// ���ű��ʽ
	int c = 1, d = 2, e = 3;
	// �Ⱥ��Ҳ�ı��ʽ��������Ҽ��㣬�����һ�����ʽ�Ľ����ֵ���Ⱥ���ߵı���
	max = (c = d + 1, d = c + 1, e = d - 4);
	printf("max = %d\n", max);

	// []�±�Ӧ�ã���������д�ľ���������±�
	int arr[] = { 1, 2, 4 };
	printf("arr[2] = %d\n", arr[2]);
	return 0;
}
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
// ѡ��ṹ

//int main() 
int m5()
{
	int x;
	printf("����Ҫ�в�Ʊ��(1/0)��");
	scanf("%d",&x);

	// �жϽṹ��ifΪ�жϵĹؼ��֣�����������Ҫ�����жϵ�������
	// ����������ʱ�ͻ�ִ��if����Ĵ����
	// ������������ʱ��ִ��else����Ĵ����
	// else �ǿ�ѡ��
	if (x == 1)
	{
		printf("��2022���˻�������������\n");
	}
	else 
	{
		printf("����Ҫ�е�׷���\n");
	}

	// ��Ҳ���жϽṹ
	if (1 < 2)
	{
		printf("�����\n");
	}
	return 0;
}
#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

// ��ʼC���Թؼ���
/*
auto break case char const continue default
do double else enum extern float for goto
if int long egister return short signed sizeof
static struct switch typedef union unsigned
void volatile while

1999��12��16�գ�ISO�Ƴ���C99��׼���ñ�׼������5��C���Թؼ��֣�
inline restrict _Bool _Complex _Imaginary

2011��12��8�գ�ISO����C���Ե��±�׼C11���ñ�׼������7��C���Թؼ��֣�
_Alignas _Alignof _Atomic _Static_assert _Noreturn _Thread_local _Generic
*/

int sum()
{
	int i = 0; // δʹ��static���εľֲ����������ź����ĵĽ�����������
	static a = 0;// ʹ��static���εľֲ������������ź����Ľ���������
	a++;
	i++;

	printf("i = %d\n", i);
	printf("a = %d\n", a);
	return -1;
}

//int main()
int m10()
{
	// δʹ��static���ε�ȫ�ֱ����ǿ����������õ�
	extern int c;
	// ʹ��static���ε�ȫ�ֱ���??????
	extern int z;
	// ������Ҫʹ�� static default
	printf("int c = %d\n", c);
	printf("int z = %d\n", c);

	// δʹ��static���ε�ȫ�ַ���
	extern int test(int, int);
	printf("test = %d\n", test(1,2));

	// ʹ��static���εķ���
	extern int tests(int, int);
	// printf("tests = %d\n", tests(1, 3)); //�������׳��쳣���޷�ʶ��tests������ʹ��static���κ�ĺ���ֻ���ڲ��������ԣ�ʧȥ��ȫ����������

	while (c < 10)
	{
		sum();
		c++;
	}
	return -1;
}
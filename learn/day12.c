#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

// ½á¹¹Ìå
struct student
{
	char name[6];
	int age;
	double height;
};

int main()
{
	struct student st = { "mz", 18, 180.8 };

	struct student* sp = &st;

	printf("1:\nname = %s\nage = %d\nheight = %lf\n", st.name, st.age, st.height);
	printf("2:\nname = %s\nage = %d\nheight = %lf\n", (*sp).name, (*sp).age, (*sp).height);
	printf("3:\nname = %s\nage = %d\nheight = %lf\n", sp->name, sp->age, sp->height);
	return 0;
}
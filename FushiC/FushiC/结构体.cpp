#define  _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int  main() 
{
	struct Stu {
		char name[20];
		int age;
		char id[20];
	};
	Stu s1 = { "×ÞµÇ",22,"201703603" };
	Stu* p = &s1;
	printf("%s\n", s1.name);
	printf("%d\n", s1.age);
	printf("%s\n", s1.id);
	printf("%s\n", (*p).name);
	printf("%s\n", p->name);


	return 0;
}
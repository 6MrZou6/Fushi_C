#define  _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//int  main() 
//{
//	struct Stu {
//		char name[20];
//		int age;
//		char id[20];
//	};
//	Stu s1 = { "邹登",22,"201703603" };
//	Stu* p = &s1;
//	printf("%s\n", s1.name);
//	printf("%d\n", s1.age);
//	printf("%s\n", s1.id);
//	printf("%s\n", (*p).name);
//	printf("%s\n", p->name);
//	return 0;
//}


//struct Stu {
//	char name[20];
//	short age;
//	char tel[12];
//	char sex[5];
//};



//struct Stu {
//	char name[20];
//	short age;
//	char tel[12];
//	char sex[5];
//}s1,s2,s3;      //三个全局的结构体变量


//typedef struct Stu {
//	char name[20];
//	short age;
//	char tel[12];
//	char sex[5];
//}Stu;     //类型
//int main() {
//	struct  Stu s1;     //局部变量
//	Stu s2; 
//	return 0;
//}


//struct S
//{
//	int a;
//	char c;
//	char arr[20];
//	double d;
//
//};
//struct T
//{
//	char ch[10];
//	struct   S s;        //结构体的变量可以是标量、数组、指针，甚至是其他结构体 
//	char *pc;
//};
//int main() {
//	char arr[] = "hello zoudeng\n";
//	struct T t = { "hehe",{2,'a',"hello world",3.14},arr };
//	printf("%s\n", t.ch);  //hehe
//	printf("%d\n", t.s.a);//2
//	printf("%c\n", t.s.c);//a
//	printf("%lf\n", t.s.d);//3.14
//	printf("%s\n", t.s.arr);//hello world
//	printf("%s\n", t.pc);//hello zoudeng
//
//	return 0;
//}


typedef struct Stu {
	char name[20];
	short age;
	char tel[12];
	char sex[5];
}Stu;
void Print1(Stu tmp) {
	printf("%s\n", tmp.name);	
	printf("%d\n", tmp.age);	
	printf("%s\n", tmp.tel);	
	printf("%s\n", tmp.sex);	
}
void Print2(Stu* tmp) {                   //Print2更好，32位机器上只传递4字节，64位上传递8字节，而Print1需要将整个结构体
	printf("%s\n", tmp->name);	//复制一份，如果结构体过大，参数压栈的开销就比较大，导致性能下降
	printf("%d\n", tmp->age);	
	printf("%s\n", tmp->tel);	
	printf("%s\n", tmp->sex);	
}
//结构体传参要传地址
int main() {
	Stu s = { "邹登",21,"17362348230","男" };
	Print1(s);//传结构体
	Print2(&s);//传地址
	return 0;
}

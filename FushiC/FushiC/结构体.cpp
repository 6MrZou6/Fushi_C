#define  _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//int  main() 
//{
//	struct Stu {
//		char name[20];
//		int age;
//		char id[20];
//	};
//	Stu s1 = { "�޵�",22,"201703603" };
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
//}s1,s2,s3;      //����ȫ�ֵĽṹ�����


//typedef struct Stu {
//	char name[20];
//	short age;
//	char tel[12];
//	char sex[5];
//}Stu;     //����
//int main() {
//	struct  Stu s1;     //�ֲ�����
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
//	struct   S s;        //�ṹ��ı��������Ǳ��������顢ָ�룬�����������ṹ�� 
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
void Print2(Stu* tmp) {                   //Print2���ã�32λ������ֻ����4�ֽڣ�64λ�ϴ���8�ֽڣ���Print1��Ҫ�������ṹ��
	printf("%s\n", tmp->name);	//����һ�ݣ�����ṹ����󣬲���ѹջ�Ŀ����ͱȽϴ󣬵��������½�
	printf("%d\n", tmp->age);	
	printf("%s\n", tmp->tel);	
	printf("%s\n", tmp->sex);	
}
//�ṹ�崫��Ҫ����ַ
int main() {
	Stu s = { "�޵�",21,"17362348230","��" };
	Print1(s);//���ṹ��
	Print2(&s);//����ַ
	return 0;
}

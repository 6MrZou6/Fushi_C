#define  _CRT_SECURE_NO_WARNINGS 1
//1.sizeof��strlenûʲô����
//2.strlen �����ַ������ȵģ�ֻ����ַ����󳤶�
//3.sizeof������������顢���͵Ĵ�С����λ���ֽ�-������

#include <stdio.h>
#include <string.h>
int main() {
	char arr1[] = "abc";
	char arr2[] = { 'a','b','c' };
	int a= 10;
	char c = 'c';
	char *p = &c;
	int arr[10] = { 0 };
	printf("%d\n", sizeof(arr1));//4
	printf("%d\n", strlen(arr1));//3
	printf("%d\n", sizeof(arr2));//3
	printf("%d\n", strlen(arr2));   //δ�ҵ�"����\0
	printf("%d\n", sizeof(a));	//4
	printf("%d\n", sizeof(c));	//1
	printf("%d\n", sizeof(p));	//4
	printf("%d\n", sizeof(arr));	//40
	return 0;
}
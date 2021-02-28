#define  _CRT_SECURE_NO_WARNINGS 1
//1.sizeof和strlen没什么关联
//2.strlen 是求字符串长度的，只针对字符串求长度
//3.sizeof计算变量、数组、类型的大小，单位是字节-操作符

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
	printf("%d\n", strlen(arr2));   //未找到"，即\0
	printf("%d\n", sizeof(a));	//4
	printf("%d\n", sizeof(c));	//1
	printf("%d\n", sizeof(p));	//4
	printf("%d\n", sizeof(arr));	//40
	return 0;
}
#define  _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main() {
	int arr[10] = { 0 };
	printf("%p\n", arr);//��Ԫ�ص�ַ
	printf("%p\n", arr+1);

	printf("%p\n", &arr[0]);
	printf("%p\n", &arr[0]+1);

	printf("%p\n", &arr);//���������ַ
	printf("%p\n", &arr+1);

	//1.&������  ȡ���������������ַ
	//2.sizeof(������)  ��������ʾ�����������飬sizeof(������)���������������Ĵ�С
	return 0;
}
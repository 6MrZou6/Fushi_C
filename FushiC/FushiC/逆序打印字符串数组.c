#define  _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
int my_strlen(char* str) {        //�������ķ��������ַ�������
	int count = 0;
	while(*str!='\0')
	{
		str++;
		count++;
	}
	return count;
}
//��һ
//void Reverse(char* arr) {
//	int left = 0;
///*	int right = strlen(arr) - 1;  */ //ʹ��C���Կ⺯��
//	int right = my_strlen(arr) - 1;
//	while (left<right)
//	{
//		int tmp = arr[left];
//		arr[left] = arr[right];
//		arr[right] = tmp;
//		left++;
//		right--;
//	}
//}

//����   �ݹ�ʵ��
void Reverse(char* arr) {
	int len = my_strlen(arr);  
	char tmp = arr[0];        //1.����һ����ʱ����tmp�����Ԫ�� 
	arr[0] = arr[len - 1];     //2.�����һ��Ԫ��ֵ������Ԫ��
	arr[len - 1] = '\0';        //3.�����һ��Ԫ�ظ�ֵ��\0��
	if(my_strlen(arr+1)>=2)    
	Reverse(arr + 1);        //4.�����м�Ԫ��
	arr[len - 1] = tmp;
}

int main() {
	char arr[] = { "abcdef" };
	Reverse(arr);
	printf("%s\n", arr);
	return 0;
}
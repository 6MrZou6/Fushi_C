#define  _CRT_SECURE_NO_WARNINGS 1
//�����������ͱ���
#include <stdio.h>
int main() {
	int a = 3, b = 5;

	printf("����ǰa=%d,b=%d\n", a, b);
	//��һ  �����������
	//int c;
	//c = a;
	//a = b;
	//b = c;
	//����   �������������   �����������
	//a = a + b; //aΪ��
	//b = a - b; //bΪa
	//	a = a - b;//aΪb
	//����  ���  �����������û��ʹ�õ���������
	a = a ^ b;
	b = a ^ b;
	a = a ^ b;
	printf("������a=%d,b=%d\n", a, b);

	return 0;
}
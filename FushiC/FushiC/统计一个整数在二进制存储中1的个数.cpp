#define  _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main() {
	//ͳ�Ʋ�����1�ĸ���


	int num = 0  ;
	int count = 0;
	scanf("%d", &num);
	//��һ ����ͳ�Ƹ���
	//while (num)
	//{
	//	if (num % 2 == 1) 
	//		count++;
	//		num=num / 2;
	//}
	//printf("%d\n", count);

	//����   ��numÿһλ���������ƣ���1��λ����
	//00000000000000000000000000000011    3
	//00000000000000000000000000000001    1
	//00000000000000000000000000000001
	int i = 0;
	for (i = 0; i < 32;i++) {
		if ((num>>i) & 1== 1) {
			count++;
		}
	}
	printf("%d\n", count);
	return 0;
}
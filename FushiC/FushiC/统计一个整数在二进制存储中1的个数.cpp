#define  _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//int count_bit_one(unsigned int num) {   //��numת�����޷�����   -1�Ĳ���11111111111111111111111111111111
//	                                                           //������λ����޷���λ����-1�Ĳ���Ϊһ������
//	int count = 0;
//	while (num)
//	{
//		if (num%2==1)
//		{
//			count++;
//		}
//		num = num / 2;
//	}
//	return count;
//}

//���ģ����Ч�� 
int count_bit_one(int num) {                                  //13
	int count = 0;                                                    //1101       num
	while (num) {                                                    //1100        num-1
		num = num & (num - 1);                             //1100        num 
		count++;                                                      //1011        num-1
	}                                                                        //1000        num 
	return count;                                                    //0111        num-1
}                                                                            //0000        num
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

	//��������һ�ĸĽ���

	count = count_bit_one(num);


	//����  ��numÿһλ���������ƣ���1��λ����
	//00000000000000000000000000000011    3
	//00000000000000000000000000000001    1
	//00000000000000000000000000000001
	//int i = 0;
	//for (i = 0; i < 32;i++) {
	//	if ((num>>i) & 1== 1) {
	//		count++;
	//	}
	//}
	printf("%d\n", count);
	return 0;
}
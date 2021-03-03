#define  _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//int count_bit_one(unsigned int num) {   //将num转换成无符号数   -1的补码11111111111111111111111111111111
//	                                                           //其中首位变成无符号位，即-1的补码为一个正数
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

//法四（最高效） 
int count_bit_one(int num) {                                  //13
	int count = 0;                                                    //1101       num
	while (num) {                                                    //1100        num-1
		num = num & (num - 1);                             //1100        num 
		count++;                                                      //1011        num-1
	}                                                                        //1000        num 
	return count;                                                    //0111        num-1
}                                                                            //0000        num
int main() {
	//统计补码中1的个数


	int num = 0  ;
	int count = 0;
	scanf("%d", &num);
	//法一 不能统计负数
	//while (num)
	//{
	//	if (num % 2 == 1) 
	//		count++;
	//		num=num / 2;
	//}
	//printf("%d\n", count);

	//法二（法一的改进）

	count = count_bit_one(num);


	//法三  将num每一位（不断右移）与1按位相与
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
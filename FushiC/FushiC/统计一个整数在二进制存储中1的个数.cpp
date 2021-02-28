#define  _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
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

	//法二   将num每一位（不断右移）与1按位相与
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
#define  _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//1739
//DigitSum(173)+9
//DigitSum(17)+3+9
//DigitSum(1)+7+3+9
int DigitSum(unsigned int num) {
	if (num > 9) {
		return DigitSum(num / 10) + num % 10;
	}
	else
	{
		return num;
	}
}
int main() {
	unsigned int num = 0;
	scanf("%d", &num);
	int ret = DigitSum(num);
	printf("%d\n", ret);
	return 0;
}
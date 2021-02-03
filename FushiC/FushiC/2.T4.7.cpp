//求两个数m和n的最大公约数
#include <stdio.h>
int main() {
	int m, n,temp;
	printf("请输入两个正整数m,n:");
	scanf_s("%d,%d", &m, &n);
	if (m > 0 && n > 0) {
		while (m%n != 0) {
			temp = n; //对中间变量temp赋值为n
			n = m % n; //将m除以n的余数赋值给n
			m = temp; //将中间变量赋值给m
		}
				printf("%d是最大公约数",  n);
		return 0;

	}
	else
	{
		printf("请输入两个正整数m,n！");
	}
}
int min(int x, int y) {
	int z;
	if (x > y)z = y;
	else z = x;
	return z;
}
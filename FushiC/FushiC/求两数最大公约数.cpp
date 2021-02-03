#define  _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main() {
	//求两数最大公约数
	//辗转相除法
	int a = 0;
	int b = 0;
	int r = 0;
	scanf("%d%d", &a, &b);
	while (r=a%b)
	{
		a = b;
		b = r;
	}
	printf("两数的最大公约数是：%d\n",b);
	return 0;
}
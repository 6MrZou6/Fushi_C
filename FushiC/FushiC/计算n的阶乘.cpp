#define  _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int Fac(int n) {
	if (n <= 1) {
		return 1;
	}
	else
	{
		return n * Fac(n - 1);
	}
}
int main() {
	//计算n的阶乘
	//int i = 1;
	//int n=0;
	//int ret = 1;
	//scanf("%d", &n);
	//for (i = 1; i <=n;i++) {
	//	ret = ret * i;
	//}
	//printf("%d的阶乘为：%d\n", n,ret);

	//递归实现
	 int n = 0;
	int ret = 1;
	scanf("%d", &n);
	ret = Fac(n);
	printf("%d!=%d", n,ret);
	return 0;
}
#define  _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main() {
	//三个数从大到小输出
	int a = 0;
	int b = 0;
	int c = 0;
	scanf("%d%d%d", &a, &b, &c);
	if (a < b)
	{
		int tmp = a;
		a = b;
		b = tmp;
	}
	if (a<c) {
		int tmp = a;
		a = c;
		c = tmp;
	}
	if (b < c) {
		int tmp = b;
		b = c;
		c = tmp;
	}
	printf("三个数从大到小顺序为：%d %d %d\n",a,b,c);
	return 0;
}
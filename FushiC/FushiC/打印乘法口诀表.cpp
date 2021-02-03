#define  _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int  main() {
	//在屏幕上输出乘法口诀表
	int i = 0;
	int j = 0;
	for (i = 1; i <= 9;i++) {
		for (j = 1; j <= i;j++) {
			printf("%d*%d = %-2d ", i, j, i*j);
		}
		printf("\n");
	}
	return 0;
}
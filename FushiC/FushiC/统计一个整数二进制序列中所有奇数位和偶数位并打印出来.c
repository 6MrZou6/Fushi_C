#define  _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main() {
	int m = 0;
	scanf("%d", &m);
	printf("奇数位：");
	int i = 0;
	for (i = 30; i >= 0; i -= 2) {
		printf("%d ", (m >> i) & 1);
	}
	printf("\n");
	printf("偶数位：");
	for (i = 31; i >= 1;i-=2) {
		printf("%d ", (m >> i) & 1);
	}
	return 0;
}
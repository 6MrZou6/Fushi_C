#define  _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main() {
	int m = 0;
	scanf("%d", &m);
	printf("����λ��");
	int i = 0;
	for (i = 30; i >= 0; i -= 2) {
		printf("%d ", (m >> i) & 1);
	}
	printf("\n");
	printf("ż��λ��");
	for (i = 31; i >= 1;i-=2) {
		printf("%d ", (m >> i) & 1);
	}
	return 0;
}
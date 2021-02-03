//求两个整数中的最大者
#include  <stdio.h>
int main() {
	int max(int x, int y);
	int a, b, c;
	printf("请输入a和b:");
	scanf_s("%d,%d", &a, &b);
	c = max(a, b);
	printf("max=%d", c);
	return 0;

}
int max(int x, int y) {
	int z;
	if (x > y)z = x;
	else z = y;
	return z;
}
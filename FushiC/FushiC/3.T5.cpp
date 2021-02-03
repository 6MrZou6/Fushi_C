#include <stdio.h>
int main() {
	int a, b;
	float x, y;
	char c1, c2;
	scanf("a=%db=%d", &a, &b);
	scanf_s("%f%e", &a, &y);
	scanf_s("%c%c", &c1, &c2);
	printf("%d,%d,%f,%f,%c,%c", a, b, y, y, c1, c2);
	return 0;

}
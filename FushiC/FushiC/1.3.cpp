//�����������е������
#include  <stdio.h>
int main() {
	int max(int x, int y);
	int a, b, c;
	printf("������a��b:");
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
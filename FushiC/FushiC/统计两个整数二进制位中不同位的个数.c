#define  _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int get_diff_bit(int m, int n) {
	int count = 0;
	int tmp = m ^ n;
	while (tmp)
	{
		tmp = tmp & (tmp - 1);
		count++;
	}
	return count;
}
int main() {
	int m = 0;
	int n = 0;
	int count = 0;
	scanf("%d%d", &m, &n);
	count=get_diff_bit(m, n);
	printf("%d\n", count);
	return 0;
}
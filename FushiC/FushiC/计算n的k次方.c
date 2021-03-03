#define  _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//n^k=n*n^(k-1)
double Pow(int n, int k) {
	if (k < 0)
		return 1.0 / Pow(n, -k);
	else if (k == 0)
		return 1;
	else
		return n * Pow(n, k - 1);

}
int main() {
	int n = 0;
	int k = 0;
	scanf("%d%d", &n, &k);
	double ret=Pow(n, k);
	printf("%2f\n", ret);
	return 0;
}
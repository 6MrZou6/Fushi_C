//给出一个大于或等于3的正整数，判断它是否为素数
#include <stdio.h>
#include <math.h>
int is_prime(int m) {
	for (int i = 2; i < sqrt(m); i++)
	{
		if (m%i == 0)
		{
			return 0;
		}
	}
	return 1;
}
int main() {
	/*int n, a=0;
	printf("请输入一个大于或等于3的正整数：");
	scanf_s("%d", &n);
	if (n>=3) {
		for (int i = 3; i <= sqrt(n); i+=2) {
			if (n%i == 0) {
				a++;
				break;
			}
		}
			if(a==0)
				printf("%d是素数", n);
			else printf("%d不是素数", n);
		}
	else printf("请输入一个大于或等于3的正整数！");*/
	//法二 函数实现
	int n = 0;
	printf("请输入一个大于或等于3的正整数：");
	scanf_s("%d", &n);
	if (is_prime(n) == 1)
		printf("%d是素数\n", n);
	else
		printf("%d不是素数\n", n);
	return 0;

}

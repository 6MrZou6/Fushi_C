#define  _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int Fac(int n) {
	if (n <= 1) {
		return 1;
	}
	else
	{
		return n * Fac(n - 1);
	}
}
int main() {
	//����n�Ľ׳�
	//int i = 1;
	//int n=0;
	//int ret = 1;
	//scanf("%d", &n);
	//for (i = 1; i <=n;i++) {
	//	ret = ret * i;
	//}
	//printf("%d�Ľ׳�Ϊ��%d\n", n,ret);

	//�ݹ�ʵ��
	 int n = 0;
	int ret = 1;
	scanf("%d", &n);
	ret = Fac(n);
	printf("%d!=%d", n,ret);
	return 0;
}
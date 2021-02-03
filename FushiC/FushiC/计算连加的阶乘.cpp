#define  _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main() {
	//º∆À„1£°+2£°+3£°+...+n!
	//int i = 1;
	//int j = 1;
	//int  n = 0;
	//int ret = 1;
	//int sum = 0;
	//scanf("%d", &n);
	//for (j = 1; j <= n;j++) {
	//	for (i = 1; i <= n; i++) {
	//		ret = 1;
	//		ret = ret * i;
	//	}
	//	sum = sum + ret;
	//}
	//printf("sum = %d\n",sum);

	//∑®∂˛
	int i = 1;
	int n = 0;
	int ret = 1;
	int sum = 0;
	scanf("%d", &n);
	for (i = 1; i <= n;i++) {
		ret = ret * i;
		sum = sum + ret;
	}
	printf("sum=%d\n", sum);
	return 0;
}
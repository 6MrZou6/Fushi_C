#define  _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main() {
	//求10个数中最大值
	int arr[] = {-1,-2,3,4,5,6,7,8,-9,-10};
	int max = arr[0];
	int i = 0;
	for (i = 1; i <= 10;i++) {
		if (arr[i] > max)
			max = arr[i];
	}
	printf("max=%d\n", max);
	return 0;
}
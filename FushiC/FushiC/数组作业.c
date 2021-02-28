#define  _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
void Printf(int arr[], int sz) {
	int i = 0;
	for (i = 0; i < sz;i++) {
		printf("%d ", arr[i]);
	}
	printf("\n");
}

void Reverse(int arr[], int sz) {
	int left = 0;
	int right = sz - 1;
	while (left<=right)
	{
		int tmp = arr[left];
		arr[left] = arr[right];
		arr[right] = tmp;
		left++;
		right--;
	}

}
//逆序打印数组
//int main() {
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	Printf(arr, sz);
//	Reverse(arr, sz);
//	Printf(arr, sz);
//
//	return 0;
//}

//交换一对数组
int main() {
	int arr1[] = { 1,3,5,7,9 };
	int arr2[] = { 2,4,6,8,10 };
	int sz = sizeof(arr1) / sizeof(arr1[0]);
	int i = 0;
	for (i = 0; i < sz;i++) {
		int tmp = arr1[i];
		arr1[i] = arr2[i];
		arr2[i] = tmp;
	}
	Printf(arr1, sz);
	Printf(arr2, sz);
	return 0;
}
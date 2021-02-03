#define  _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>

int binary_search(int arr[],int k,int sz) { //本质上arr是一个指针
	int left = 0;
	int right = sz - 1;
	
	while (left <= right) {
		int mid = (left + right) / 2;
		if (arr[mid] < k) {
			left = mid + 1;
		}
		else if (arr[mid]>k) {
			right = mid - 1;
		}
		else
		{
			return mid;
		}
	}
	return -1;
}
int main() {
	//写一个代码，在arr[]数组中找到k
	//法一：顺序遍历(效率低)
	//int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	//int k = 7;
	/*int i = 0;
	int sz = sizeof(arr) / sizeof(arr[0]);
	for ( i = 0; i < sz;i++) {
		if (k == arr[i])
		{
			printf("找到了，下标是%d\n", i);
			break;
		}

	}
	if (sz-1==i)
	{
		printf("找不到\n");
	}*/
	//法二：折半查找（二分查找）
	//int i = 0;
	//int sz = sizeof(arr) / sizeof(arr[0]);
	//int left = 0;//左下标
	//int right = sz - 1;

	//while (left<=right) {
	//	int mid = (left + right) / 2;
	//	if (arr[mid] > k)
	//	{
	//		right = mid - 1;
	//	}
	//	else if (arr[mid] < k)
	//	{
	//		left = mid + 1;
	//	}
	//	else {
	//		printf("找到了，下标是%d\n", mid);
	//		break;
	//	}
	//}
	//if (left > right)
	//	printf("找不到\n");

	//法三  函数实现
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int k = 7;
	int sz = sizeof(arr) / sizeof(arr[0]);
	int ret = binary_search(arr,k,sz);   //传递过去的是arr首元素地址
	if ( ret==-1) {
		printf("找不到该元素下标\n");
	}
	else 
	{
		printf("找到了，元素下标是%d\n", ret);
	}
		return 0;
}
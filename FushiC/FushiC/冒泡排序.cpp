#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
void bubble_sort(int arr[], int sz) {
	int i = 0;
	int j = 0;

	for ( i = 0; i <sz-1; i++)
	{
		int flag = 1;   //假设本次要排序的数组已经有序
		//每一趟冒泡排序
		for (j = 0; j < sz - 1 - i;j++) {
			if (arr[j]>arr[j+1]) {
			int 	tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
				flag = 0;  //本次要排序的数组其实不完全有序
			}
		}
		if (flag == 1) {
			break;
		}
	}
}
int main() {
	//冒泡升序
	//9 8 7 6 5 4 3 2 1 0
	//8 9 7 6 5 4 3 2 1 0
	//8 7 9 6 5 4 3 2 1 0
	//...
	//8 7 6 5 4 3 2 1 0 9    第一趟冒泡排序完成
	//7 8 6 5 4 3 2 1 0 9
	//...
	//7 6 5 4 3 2 1 0 8 9 第二趟冒泡排序完成
	//...
	//0 1 2 3 4 5 6 7 8 9 第九趟冒泡排序完成
	int arr[] = { 9,8,7,6,5,4,3,2,1,0 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	bubble_sort(arr,sz);
	for (int i = 0; i < sz;i++) {
		printf("%d ", arr[i]);
	}
	
	return 0;
}
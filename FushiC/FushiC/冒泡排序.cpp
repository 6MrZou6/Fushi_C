#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
void bubble_sort(int arr[], int sz) {
	int i = 0;
	int j = 0;

	for ( i = 0; i <sz-1; i++)
	{
		int flag = 1;   //���豾��Ҫ����������Ѿ�����
		//ÿһ��ð������
		for (j = 0; j < sz - 1 - i;j++) {
			if (arr[j]>arr[j+1]) {
			int 	tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
				flag = 0;  //����Ҫ�����������ʵ����ȫ����
			}
		}
		if (flag == 1) {
			break;
		}
	}
}
int main() {
	//ð������
	//9 8 7 6 5 4 3 2 1 0
	//8 9 7 6 5 4 3 2 1 0
	//8 7 9 6 5 4 3 2 1 0
	//...
	//8 7 6 5 4 3 2 1 0 9    ��һ��ð���������
	//7 8 6 5 4 3 2 1 0 9
	//...
	//7 6 5 4 3 2 1 0 8 9 �ڶ���ð���������
	//...
	//0 1 2 3 4 5 6 7 8 9 �ھ���ð���������
	int arr[] = { 9,8,7,6,5,4,3,2,1,0 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	bubble_sort(arr,sz);
	for (int i = 0; i < sz;i++) {
		printf("%d ", arr[i]);
	}
	
	return 0;
}
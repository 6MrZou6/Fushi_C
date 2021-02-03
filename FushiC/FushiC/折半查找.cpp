#define  _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>

int binary_search(int arr[],int k,int sz) { //������arr��һ��ָ��
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
	//дһ�����룬��arr[]�������ҵ�k
	//��һ��˳�����(Ч�ʵ�)
	//int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	//int k = 7;
	/*int i = 0;
	int sz = sizeof(arr) / sizeof(arr[0]);
	for ( i = 0; i < sz;i++) {
		if (k == arr[i])
		{
			printf("�ҵ��ˣ��±���%d\n", i);
			break;
		}

	}
	if (sz-1==i)
	{
		printf("�Ҳ���\n");
	}*/
	//�������۰���ң����ֲ��ң�
	//int i = 0;
	//int sz = sizeof(arr) / sizeof(arr[0]);
	//int left = 0;//���±�
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
	//		printf("�ҵ��ˣ��±���%d\n", mid);
	//		break;
	//	}
	//}
	//if (left > right)
	//	printf("�Ҳ���\n");

	//����  ����ʵ��
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int k = 7;
	int sz = sizeof(arr) / sizeof(arr[0]);
	int ret = binary_search(arr,k,sz);   //���ݹ�ȥ����arr��Ԫ�ص�ַ
	if ( ret==-1) {
		printf("�Ҳ�����Ԫ���±�\n");
	}
	else 
	{
		printf("�ҵ��ˣ�Ԫ���±���%d\n", ret);
	}
		return 0;
}
#define  _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main() {
	//�ҳ�������ֻ����һ�ε���
	int arr[] = { 1,2,3,4,5,1,2,3,4 };
	int i = 0;
	int sz = sizeof(arr) / sizeof(arr[i]);
	//for (i=0;i<sz;i++)
	//{
	//	//ͳ��arr[i]�������г����˼���
	//	int j = 0;
	//	int count = 0;//������
	//	for (j = 0; j < sz;j++) {
	//		if (arr[i]==arr[j]) {
	//			count++;
	//		}
	//	}
	//	if (count == 1) {
	//		printf("������%d\n", arr[i]);
	//		break;
	//	}
	//}
	//����  ������㽻����  0^a=a   a^a=0
	int ret = 0;
	for (i = 0; i < sz;i++) {
		ret = ret ^ arr[i];
	}
	printf("������%d\n", ret);
	return 0;
}
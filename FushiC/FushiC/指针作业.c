#define  _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//1.
//int main() {
//	int arr[] = { 1,2,3,4,5 };
//	short* p = (short*)arr;
//	int i = 0;
//	for (i = 0; i < 4;i++) {
//		*(p + i) = 0;
//	}
//	for (i = 0; i < 5;i++) {
//		printf("%d ", arr[i]);    //0 0 3 4 5
//	}
//	return 0;
//}

//2.
//int main() {
//	int a = 0x11223344;
//	char* p = (char*)&a;         //44  33   22    11    ���ŷŽ�ȥ��
//	*p = 0;//ÿ�θ�һ���ֽ�     00    33    22  11                
//	printf("%x\n", a);//              0x11223300
//	return 0;
//}

//3.
//int i;//ȫ�ֱ�������ʼ����Ĭ����0
//int main() {
//	i--;   //-1
//	//10000000000000000000000000000001      ԭ��
//	//11111111111111111111111111111110      ����
//	//11111111111111111111111111111111      ����
//	if (i>sizeof(i)) {    //sizeof()�������/������ռ�ڴ��С��������ֵ��Ϊ�޷�����
//		//�ֽ�-1�Ĳ��뿴���޷�����������ʼλ��1���������λ�����Ը�ֵ��һ���ܴ����ֵ��sizeof(i)=4
//		printf(">\n");
//	}
//	else
//	{
//		printf("<\n");
//	}
//	return 0;
//}

//4.ʹ��ָ���ӡ��������
void print(int* p,int sz) {
	int i = 0;
	for (i=0;i<sz;i++)
	{
		printf("%d ", *(p + i));
	}
}
int main() {
	int arr[] = { 1,2,3,4,5,6,7,8,9 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	print(arr, sz);
	return 0;
}
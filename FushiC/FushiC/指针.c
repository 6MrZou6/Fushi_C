#define  _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//int main() {
//
//	//ָ�����;�����ָ����н����ò�����ʱ���ܹ����ʵĿռ�Ĵ�С
// //int* p   *p�ܹ�����4���ֽ�
////char* p  *p�ܹ�����1���ֽ�
//	//double* p  *p �ܹ�����8���ֽ�
//
//	//int a = 0x11223344;
//	////int* pa = &a;
//	////*pa = 0;
//	//char* pc = &a;
//	//*pc = 0;
//	////printf("%p\n", pa);
//	//printf("%p\n", pc);
//
//
//
//	//ָ�����;�����ָ��һ���߶�Զ��������
//	//int*     p+1     -->4
//	//char* p  p+1     -->1
//	//double* p  p+1    -->8
//	//int a = 0x11223344;
//	//int* pa = &a;
//	//char* pc = &a;
//	//printf("%p\n", pa);
//	//printf("%p\n", pa+1);
//
//	//printf("%p\n", pc);
//	//printf("%p\n", pc+1);
//
//
//	//int arr[10] = { 0 };
//	////int* p = arr;  //������-Ԫ���׵�ַ
//	//char* p = arr;
//	//int  i= 0;
//	//for (i=0;i<10;i++){
//	//	*(p + i) = 1;
//	//}
//
//
//
//
//	return 0;
//}

//int main() {
//
//	//Ұָ��
//	//1.
//	//int a;//�ֲ���������ʼ����Ĭ��Ϊ���ֵ
//	//int* p;//�ֲ�ָ���������ʼ�����ͳ�ʼ��Ϊ���ֵ
//	//*p = 20;
//
//	//2.ָ��Խ�����
//	//	int arr[10] = { 0 };
//	//int* p = arr;  //������-Ԫ���׵�ַ
//	//char* p = arr;
//	//int  i= 0;
//	//for (i=0;i<=12;i++){
//	//	*p++ = i;
//	//}
//
//
//	//3.ָ��ָ��Ŀռ��ͷ�
//	//�������
//	//return &a֮������a�ĵ�ַ�ռ䱻�ͷţ�*pͨ���õ�ַ��ȡ�Ĳ�һ������һ�δ洢������
//	int* p = test();
//	printf("%d\n", *p);
//	return 0;
//}
//int* test() {
//	int a = 10;
//	return &a;
//}

//ָ�������
//int main() {
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	//int sz = sizeof(arr) / sizeof(arr[0]);
//	//int i = 0;
//	//int* p = arr;//����Ԫ���׵�ַ
//	//for (i = 0; i < 10;i++) {
//	//	printf("%d ", *p);
//	//	p++;
//	//}
////ָ��-ָ��=Ԫ�ظ���
//	//printf("%d\n", &arr[9] - &arr[0]);
//	return 0;
//}

//����ָ��
//int main(){
//	int a = 10;
//	int* pa = &a;
//	int** ppa = &pa;//ppa���Ƕ���ָ��
//	printf("%d\n", **ppa);
//	printf("%d\n", a);
//	return 0;
//}


//ָ������-����
//����ָ��-ָ��
int main() {
	int a = 10;
	int b = 20;
	int c = 30;
	int* arr[3] = { &a,&b,&c };  //ָ������
	int i = 0;
	for (i = 0; i < 3;i++) {
		printf("%d ", *arr[i]);
	}
	return 0;
}
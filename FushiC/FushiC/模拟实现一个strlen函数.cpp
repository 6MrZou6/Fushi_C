#define  _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
//��һ��������
//int my_strlen(char* str) {
//	int count = 0;
//	while (*str != '\0') {
//		count++;
//		str++;   //��ַ��һ���������
//	}
//	return count;
//}

//��������������ʱ������ʹ�õݹ�ķ���
//�Ѵ��»�С
//"zoudeng"
//1+"oudeng"
//1+1+"udeng"
//...
//1+my_strlen(str+1)
//int my_strlen(char* str) {
//	if (*str != '\0') {
//	return	1+my_strlen(str + 1);
//	}
//	else {
//		return 0;
//	}
//}

//������ָ��
int my_strlen(char* str) {
	char* start = str;
	char* end = str;
	while (*end!='\0')
	{
		end++;
	}
	return end - start;
}
int main() {
	//ģ��ʵ��һ��strlen����
	char arr[] = "zoudeng";
	/*printf("%d", strlen(arr));*/
	printf("%d", my_strlen(arr));  //���鴫�Σ�����ȥ�Ĳ����������飬������Ԫ�صĵ�ַ
	return 0;
}
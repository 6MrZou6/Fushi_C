#define  _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <assert.h>

//6�ִ�
//void my_strcpy(char* dest,char* src) {
//	while (*src!='\0')
//	{
//		*dest = *src;
//		dest++;
//		src++;
//	}
//	*dest = *src;
//}

//8�ִ�
//void my_strcpy(char* dest, char* src) {
//	assert(dest != NULL);//����
//	assert(src != NULL);
//	while (*dest++ = *src++)
//	{
//		;
//	}
//}

//���ִ�
char* my_strcpy(char* dest, const char* src) {       //const����*src,ʹ��Դ���鲻�ܱ��ı�
	assert(dest != NULL);//����
	assert(src != NULL);
	char* ret = dest;
	while (*dest++ = *src++)
	{
		;
	}
	return ret;
}
int main() {
	char arr1[] = "#############" ; //#############\0
	char arr2[] = "zoudeng" ; //zoudeng\0
	//��һ
	//strcpy(arr1, arr2);
	//����    �Զ��庯��
/*	my_strcpy(arr1, arr2);
	printf("%s\n", arr1); */        //��ӡ��\0ʱ��ֹͣ��ӡ
	printf("%s\n", my_strcpy(arr1, arr2));
	return 0;
}
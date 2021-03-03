#define  _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <assert.h>

//6分答案
//void my_strcpy(char* dest,char* src) {
//	while (*src!='\0')
//	{
//		*dest = *src;
//		dest++;
//		src++;
//	}
//	*dest = *src;
//}

//8分答案
//void my_strcpy(char* dest, char* src) {
//	assert(dest != NULL);//断言
//	assert(src != NULL);
//	while (*dest++ = *src++)
//	{
//		;
//	}
//}

//满分答案
char* my_strcpy(char* dest, const char* src) {       //const修饰*src,使得源数组不能被改变
	assert(dest != NULL);//断言
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
	//法一
	//strcpy(arr1, arr2);
	//法二    自定义函数
/*	my_strcpy(arr1, arr2);
	printf("%s\n", arr1); */        //打印到\0时就停止打印
	printf("%s\n", my_strcpy(arr1, arr2));
	return 0;
}
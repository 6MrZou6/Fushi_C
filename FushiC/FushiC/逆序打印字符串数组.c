#define  _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
int my_strlen(char* str) {        //计数器的方法计算字符串个数
	int count = 0;
	while(*str!='\0')
	{
		str++;
		count++;
	}
	return count;
}
//法一
//void Reverse(char* arr) {
//	int left = 0;
///*	int right = strlen(arr) - 1;  */ //使用C语言库函数
//	int right = my_strlen(arr) - 1;
//	while (left<right)
//	{
//		int tmp = arr[left];
//		arr[left] = arr[right];
//		arr[right] = tmp;
//		left++;
//		right--;
//	}
//}

//法二   递归实现
void Reverse(char* arr) {
	int len = my_strlen(arr);  
	char tmp = arr[0];        //1.创建一个临时变量tmp存放首元素 
	arr[0] = arr[len - 1];     //2.将最后一个元素值赋给首元素
	arr[len - 1] = '\0';        //3.将最后一个元素赋值‘\0’
	if(my_strlen(arr+1)>=2)    
	Reverse(arr + 1);        //4.逆序中间元素
	arr[len - 1] = tmp;
}

int main() {
	char arr[] = { "abcdef" };
	Reverse(arr);
	printf("%s\n", arr);
	return 0;
}
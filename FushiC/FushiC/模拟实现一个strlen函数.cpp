#define  _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
//法一：计数器
//int my_strlen(char* str) {
//	int count = 0;
//	while (*str != '\0') {
//		count++;
//		str++;   //地址加一，往后遍历
//	}
//	return count;
//}

//法二：不创建临时变量，使用递归的方法
//把大事化小
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

//法三：指针
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
	//模拟实现一个strlen函数
	char arr[] = "zoudeng";
	/*printf("%d", strlen(arr));*/
	printf("%d", my_strlen(arr));  //数组传参，传过去的不是整个数组，而是首元素的地址
	return 0;
}
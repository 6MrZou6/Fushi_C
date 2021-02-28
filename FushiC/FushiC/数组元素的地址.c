#define  _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main() {
	int arr[10] = { 0 };
	printf("%p\n", arr);//首元素地址
	printf("%p\n", arr+1);

	printf("%p\n", &arr[0]);
	printf("%p\n", &arr[0]+1);

	printf("%p\n", &arr);//整个数组地址
	printf("%p\n", &arr+1);

	//1.&数组名  取出的是整个数组地址
	//2.sizeof(数组名)  数组名表示的是整个数组，sizeof(数组名)计算的是整个数组的大小
	return 0;
}
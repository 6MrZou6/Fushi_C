#define  _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main() {
	int i = 0;            //i的地址比arr高
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	for (i = 0; i <= 12;i++) {
		printf("haha\n");                
		arr[i] = 0;                          //经调试发现arr[12]的地址恰好就是i此时的地址，即他们是同一块空间，12次循环后，
	}                    //i被赋值为0，陷入死循环
	return 0   
}

//1.栈区的默认使用：先使用高地址空间，再使用低地址空间
//2.数组随着下标增长，地址由低到高变化
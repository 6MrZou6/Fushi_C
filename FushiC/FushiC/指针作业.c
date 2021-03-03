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
//	char* p = (char*)&a;         //44  33   22    11    倒着放进去的
//	*p = 0;//每次改一个字节     00    33    22  11                
//	printf("%x\n", a);//              0x11223300
//	return 0;
//}

//3.
//int i;//全局变量不初始化，默认是0
//int main() {
//	i--;   //-1
//	//10000000000000000000000000000001      原码
//	//11111111111111111111111111111110      反码
//	//11111111111111111111111111111111      补码
//	if (i>sizeof(i)) {    //sizeof()计算变量/类型所占内存大小，故事正值，为无符号数
//		//现将-1的补码看做无符号数，即起始位的1不代表符号位，所以该值是一个很大的正值，sizeof(i)=4
//		printf(">\n");
//	}
//	else
//	{
//		printf("<\n");
//	}
//	return 0;
//}

//4.使用指针打印数组内容
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
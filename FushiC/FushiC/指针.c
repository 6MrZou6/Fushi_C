#define  _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//int main() {
//
//	//指针类型决定了指针进行解引用操作的时候，能够访问的空间的大小
// //int* p   *p能够访问4个字节
////char* p  *p能够访问1个字节
//	//double* p  *p 能够访问8个字节
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
//	//指针类型决定了指针一步走多远（步长）
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
//	////int* p = arr;  //数组名-元素首地址
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
//	//野指针
//	//1.
//	//int a;//局部变量不初始化，默认为随机值
//	//int* p;//局部指针变量不初始化，就初始化为随机值
//	//*p = 20;
//
//	//2.指针越界访问
//	//	int arr[10] = { 0 };
//	//int* p = arr;  //数组名-元素首地址
//	//char* p = arr;
//	//int  i= 0;
//	//for (i=0;i<=12;i++){
//	//	*p++ = i;
//	//}
//
//
//	//3.指针指向的空间释放
//	//错误代码
//	//return &a之后，属于a的地址空间被释放，*p通过该地址读取的不一定是上一次存储的内容
//	int* p = test();
//	printf("%d\n", *p);
//	return 0;
//}
//int* test() {
//	int a = 10;
//	return &a;
//}

//指针的运算
//int main() {
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	//int sz = sizeof(arr) / sizeof(arr[0]);
//	//int i = 0;
//	//int* p = arr;//数组元素首地址
//	//for (i = 0; i < 10;i++) {
//	//	printf("%d ", *p);
//	//	p++;
//	//}
////指针-指针=元素个数
//	//printf("%d\n", &arr[9] - &arr[0]);
//	return 0;
//}

//二级指针
//int main(){
//	int a = 10;
//	int* pa = &a;
//	int** ppa = &pa;//ppa就是二级指针
//	printf("%d\n", **ppa);
//	printf("%d\n", a);
//	return 0;
//}


//指针数组-数组
//数组指针-指针
int main() {
	int a = 10;
	int b = 20;
	int c = 30;
	int* arr[3] = { &a,&b,&c };  //指针数组
	int i = 0;
	for (i = 0; i < 3;i++) {
		printf("%d ", *arr[i]);
	}
	return 0;
}
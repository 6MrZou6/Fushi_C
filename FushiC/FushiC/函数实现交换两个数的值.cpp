#define  _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
void swap1(int x,int y) {  //该方法不可行，因为x和y有自己独立的空间，与a和b地址不同，x和y是交换了但a和b没交换
	int tmp = 0;         //当实参传递给形参的时候，形参实际是实参的一份临时拷贝，对形参的修改不会改变实参
	tmp = x;
	x = y;
	y = tmp;
}
void swap2(int* pa,int* pb) {//指针实现   通过传地址的方式
	int tmp = 0;
	tmp = *pa;
	*pa = *pb;
	*pb = tmp;
}
int main() {
	//使用函数交换两个数的值
	int a = 12;
	int b = 45;
	printf("a=%d b=%d\n",a,b);
	//swap1(a,b);
	swap2(&a,&b);
	printf("a=%d b=%d\n",a,b);
	return 0;
}
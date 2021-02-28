#define  _CRT_SECURE_NO_WARNINGS 1
//交换两个整型变量
#include <stdio.h>
int main() {
	int a = 3, b = 5;

	printf("交换前a=%d,b=%d\n", a, b);
	//法一  引入第三变量
	//int c;
	//c = a;
	//a = b;
	//b = c;
	//法二   不引入第三变量   但会整型溢出
	//a = a + b; //a为和
	//b = a - b; //b为a
	//	a = a - b;//a为b
	//法三  异或  不会溢出，且没有使用第三个变量
	a = a ^ b;
	b = a ^ b;
	a = a ^ b;
	printf("交换后a=%d,b=%d\n", a, b);

	return 0;
}
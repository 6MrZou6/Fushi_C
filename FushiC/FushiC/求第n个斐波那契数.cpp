#define  _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//�����n��쳲�������
//1 1 2 3 5 8 13 21 34...

//���50��
// 50
//49 48
//47 48 46 47 
//45 46 46 47 44 45 45 46
//...  �������̫�� Ч�ʺܵ�

//int Fib(int n) {
//	if (n <= 2) {
//		return 1;
//	}
//	else
//	{
//		return Fib(n - 1) + Fib(n - 2);
//	}
//}

//1 1 2 3 5 8 13 21 34...
int Fib(int n) {
	int a = 1;
	int b = 1;
	int c = 1;
	while (n>2)
	{
		c = a + b;
		a = b;
		b = c;
		n--;
	}
	return c;
}
int main() {
	int ret = 0;
	int n = 0;
	scanf("%d", &n);
	ret = Fib(n);
	printf("��%d��쳲���������%d", n, ret);
	return 0;
}
#define  _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main() {
	//���������Լ��
	//շת�����
	int a = 0;
	int b = 0;
	int r = 0;
	scanf("%d%d", &a, &b);
	while (r=a%b)
	{
		a = b;
		b = r;
	}
	printf("���������Լ���ǣ�%d\n",b);
	return 0;
}
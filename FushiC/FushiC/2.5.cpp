//����һ�����ڻ����3�����������ж����Ƿ�Ϊ����
#include <stdio.h>
#include <math.h>
int is_prime(int m) {
	for (int i = 2; i < sqrt(m); i++)
	{
		if (m%i == 0)
		{
			return 0;
		}
	}
	return 1;
}
int main() {
	/*int n, a=0;
	printf("������һ�����ڻ����3����������");
	scanf_s("%d", &n);
	if (n>=3) {
		for (int i = 3; i <= sqrt(n); i+=2) {
			if (n%i == 0) {
				a++;
				break;
			}
		}
			if(a==0)
				printf("%d������", n);
			else printf("%d��������", n);
		}
	else printf("������һ�����ڻ����3����������");*/
	//���� ����ʵ��
	int n = 0;
	printf("������һ�����ڻ����3����������");
	scanf_s("%d", &n);
	if (is_prime(n) == 1)
		printf("%d������\n", n);
	else
		printf("%d��������\n", n);
	return 0;

}

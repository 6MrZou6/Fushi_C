//��������m��n�����Լ��
#include <stdio.h>
int main() {
	int m, n,temp;
	printf("����������������m,n:");
	scanf_s("%d,%d", &m, &n);
	if (m > 0 && n > 0) {
		while (m%n != 0) {
			temp = n; //���м����temp��ֵΪn
			n = m % n; //��m����n��������ֵ��n
			m = temp; //���м������ֵ��m
		}
				printf("%d�����Լ��",  n);
		return 0;

	}
	else
	{
		printf("����������������m,n��");
	}
}
int min(int x, int y) {
	int z;
	if (x > y)z = y;
	else z = x;
	return z;
}
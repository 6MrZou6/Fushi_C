#define  _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
void print(int num){
	if (num > 9) {
		print(num / 10);
	}
	printf("%d ", num % 10);
}
int main() {
	//ʹ�õݹ麯��ʵ�ִ�ӡ�������ֵ�ÿһλ
	int num = 0;
	printf("��������Ҫ��ӡ�����֣�"); //1234
	//(123)4
	//(12)34
	//(1)234
	scanf("%d", &num);
	print(num);
	return 0;

}
#define  _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main(){
	//����1��100��9�ĸ���
	//9 19 29 39 49 59 69 79 89 99
	//90 91 92 93 94 95 96 97 98 99
	int i = 0;
	int count = 0;
	for (i = 1; i <= 100;i++) {
		if (i%10==9) 
			count++;
		if (i / 10 == 9)
			count++;
	}
	printf("9�ĸ���Ϊ%d\n", count);
	return 0;
}
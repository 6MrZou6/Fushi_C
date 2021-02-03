#define  _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
void print(int num){
	if (num > 9) {
		print(num / 10);
	}
	printf("%d ", num % 10);
}
int main() {
	//使用递归函数实现打印输入数字的每一位
	int num = 0;
	printf("请输入需要打印的数字："); //1234
	//(123)4
	//(12)34
	//(1)234
	scanf("%d", &num);
	print(num);
	return 0;

}
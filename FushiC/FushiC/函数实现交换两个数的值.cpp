#define  _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
void swap1(int x,int y) {  //�÷��������У���Ϊx��y���Լ������Ŀռ䣬��a��b��ַ��ͬ��x��y�ǽ����˵�a��bû����
	int tmp = 0;         //��ʵ�δ��ݸ��βε�ʱ���β�ʵ����ʵ�ε�һ����ʱ���������βε��޸Ĳ���ı�ʵ��
	tmp = x;
	x = y;
	y = tmp;
}
void swap2(int* pa,int* pb) {//ָ��ʵ��   ͨ������ַ�ķ�ʽ
	int tmp = 0;
	tmp = *pa;
	*pa = *pb;
	*pb = tmp;
}
int main() {
	//ʹ�ú���������������ֵ
	int a = 12;
	int b = 45;
	printf("a=%d b=%d\n",a,b);
	//swap1(a,b);
	swap2(&a,&b);
	printf("a=%d b=%d\n",a,b);
	return 0;
}
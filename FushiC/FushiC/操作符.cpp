#define  _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main() {
//	int a = -1;
//	//整数在内存中是以二进制补码形式存储
//	//10000000000000000000000000000001  原码 
//	//11111111111111111111111111111110  反码
//	//11111111111111111111111111111111  补码
//	//算术右移     右边丢掉，左边补0，首位补符号位
//	//逻辑右移     右边丢掉，左边补0
//	int b = a << 1;
//	printf("%d\n", b);
//
//
//	//&   按二进制位与
//	//|     按二进制位或
//	//^   按二进制位异或    同0异1
//
//
////& 取地址操作符
//	int b = 3;
//	int * p = &b;//取地址操作符
//	*p = 3;//解引用操作符
//


//~  按二进制位取反
	int c = 0;
	//000000000000000000000000  原码反码补码
	int a = ~c;   //-1
	//111111111111111111111111   补码
	//111111111111111111111110   反码
	//100000000000000000000001   原码
	//


	//&&逻辑与
	int i = 0, m = 1, n = 2, p = 3, q = 4;
	//i = m++&&++n&&q++;
	i = m++ || ++n || q++;
	printf(" m=%d\n n=%d\n p=%d\n q=%d\n",m, n, p, q);  //1 2 3 4          2 3 3 4
}
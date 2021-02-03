//键入一个大写字母，输出其小写字母
#include <stdio.h>
int main() {
	char c1, c2;
	c1 = getchar();
	c2 = c1 + 32;
	putchar(c2);
	return 0;
}
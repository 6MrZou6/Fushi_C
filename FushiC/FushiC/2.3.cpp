//输出2000-2500年之间所有的闰年
#include <stdio.h>
int main() {
	int year = 2000;
	for (year;year<=2500;year++)
	{
		if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
			printf("%d是闰年\n", year);
	}
	
}
//���2000-2500��֮�����е�����
#include <stdio.h>
int main() {
	int year = 2000;
	for (year;year<=2500;year++)
	{
		if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
			printf("%d������\n", year);
	}
	
}
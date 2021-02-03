//Çó1x3x5x7x9x11
#include <stdio.h>
int main() {
	int s=1;
	for (int a = 1; a <= 11; a+=2) {
		s*= a;
	}
	printf("%d", s);
}
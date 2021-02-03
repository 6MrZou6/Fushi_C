//Çó1-1/2=1/3-1/4+...+1/99-1/100
#include <stdio.h>

int main() {
	int sign = 1;
	double sum = 1.0;
	double term  ;
	for (int deno=2;deno<=100;deno++)
	{
		sign = (-1)*sign;
		term= (1.0 / deno);
		sum = sum + sign *term;
	}
	printf("sum=%f\n", sum);

}

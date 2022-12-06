#include <stdio.h>
#include <stdlib.h>

int main(){
	int a, b, s, m, d, su, r;
	printf("Enter the first number - \n");
	scanf("%i", &a);
	printf("Enter the second number - \n");
	scanf("%i", &b);
	s = a + b;
	su = a - b;
	m = a * b;
	d = (float)a / (float)b;
	r = a % b;
	printf("The addition is %i, the subtraction is %i, the multiplication is %i, the dividend is %i, and remainder is %i", a + b, a -b, a *b, a /b, a %b);
	return 0;
}

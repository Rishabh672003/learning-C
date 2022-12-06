#include<stdio.h>

int main(){
	puts("This program calculates the area of the triangle by taking all of its 3 sides");
	float a, b, c;
	puts("write the first side length - ");
	scanf("%f", &a);
	puts("write the second side length - ");
	scanf("%f", &b);
	puts("write the third side length - ");
	scanf("%f", &c);
	float s = (a + b +c)/2;
	float area1 = s-a;
	float area2= s-b;
	float area3 = s-c;
	float area = pow(s * area1 * area2 * area3, 0.5);
	printf("%f", area);
	return 0;
}

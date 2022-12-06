#include<stdio.h>
main()
{
	printf("this program will give you the area of the triangle with the base and height that you provide\n");
	float height;
	printf("Height - ");
	scanf("%f", &height);
	printf("Base - ");
	float base;
	scanf("%f", &base);
	float area = 0.5 * base * height;
	printf("Area is %f", area);
}

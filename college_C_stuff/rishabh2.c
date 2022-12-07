#include <stdio.h>
int main()
{
	printf("Radius is - ");
	float radius;
	scanf("%f", &radius);
	float area = (3.14)*radius*radius;
	printf("Area = %f", area);
	return 0;
}

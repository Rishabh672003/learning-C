#include<stdio.h>

int main(){
	int a, b, sum;
	printf("enter a\n");
	scanf("%i", &a);
	printf("enter b\n");
	scanf("%i", &b);
	sum = a + b;
	printf("The sum of a and b is %i\n", sum);
	if (sum > 1 && sum < 20){
		printf("sum is between 1 and 20");
	}
	else {
		printf("sum is more than 20");
	}
	return 0;
}

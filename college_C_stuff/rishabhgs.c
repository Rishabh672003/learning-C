#include<stdio.h>
main(){
	printf("find the salary of the guy");
	printf("basic salary = ");
	int basic;
	scanf("%d", &basic);
	float hra = basic * (0.8/ 100);
	printf("hra is %f\n", hra);
	float da = basic * (0.2/ 100);
	printf("da is %f\n", da);
	float total = basic + hra + da;
	printf("Total gross salary = %f", total);
	return 0;
}

#include <stdio.h>

int main() {
    int marks;
    printf("Enter your marks - ");
    scanf("%d", &marks);
    if (marks > 100) {
        puts("idiot do better");
    } else if (marks >= 80 && marks <= 100) {
        printf("Your grade is A");
    } else if (marks >= 60 && marks < 80) {
        printf("Your grade is B");
    } else if (marks >= 40 && marks < 60) {
        printf("Your grade is C");
    } else if (marks < 40 && marks >= 0) {
        printf("you have failed");
    } else {
        puts("you are the biggest idiot in the history");
    }
    return 0;
}

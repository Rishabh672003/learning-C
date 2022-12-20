#include <stdio.h>

void swap(int a, int b);

int main()
{
    int m = 22;
    int n = 44;
    printf("values before swap m = %d\n and n = %d", m, n);
    swap(m, n);
}

void swap(int a, int b)
{
    int tmp;
    tmp = a;
    a = b;
    b = tmp;
    printf("\n values after wap m = %d\n and n = %d", a, b);
}
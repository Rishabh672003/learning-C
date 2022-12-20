#include <stdio.h>

int main()
{
    int n, r, c, s, d;
    char ch;

    printf("Enter the number of rows: ");
    scanf("%d", &n);

    for (r = 1; r <= n; r++)
    {
        for (s = 1; s <= n - r; s++)
        {
            printf(" ");
        }
        for (c = 1; c <= r; c++)
        {
            printf("%d", c);
        }
        ch = 'A';
        for (d = 1; d < r; d++)
        {
            printf("%c", ch);
            ch++;
        }
        printf("\n");
    }
    return 0;
}
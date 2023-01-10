#include <stdio.h>
#include <stdlib.h>

void main()
{
    int a[100], pos, c, n;
    char ch = 'y';
    printf("Enter number of element in array\n");
    scanf("Enter %d elements \n", n);
    for (c = 0; c < n; c++)
    {
        scanf("%d", &a[c]);
    }
    do
    {
        if (ch == 'y')
        {
            printf("Enter the location where you wish to delete element\n");
            scanf("%d", &a[c]);
            if (pos >= n + 1)
            {
                printf("Deletion not possible.\n");
            }
            else
            {
                for (c = pos - 1; c < n - 1; c++)
                {
                    a[c] = a[c + 1];
                }
                n = n - 1;
                if (n > 0)
                {
                    printf("Resultant array: \n");
                    for (c = 0; c < n; c++)
                    {
                        printf("%d\n", a[c]);
                    }
                }
                else
                {
                    printf("Array is empty\n");
                    exit(0);
                }
            }
        }

        printf("Continue??\n");
        int flushall();
        scanf("%c", &ch);
    } while (ch == 'y' && n != 0);
}
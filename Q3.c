#include<stdio.h>

int main()
{
    int i, j = 1, k;

    for (i = 1; i <= 4; i++)
    {
        for (k = 1; k <= i; k++)
        {
            printf("%d ", j++);
        }
        printf("\n");
    }
    return 0;
}
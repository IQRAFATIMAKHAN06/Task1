#include<stdio.h>

int main()
{
    int i, n, e,sum = 0;
    printf("Enter Your Number\n");
    scanf("%d", &n);

        printf("The even numbers are :");
    for(i = 1; i <= n; i++)
    {
        e = 2 * i;
        printf("%d ", e);
        sum += e;
    }
    printf("\nThe Sum of even Natural Number up to %d terms : %d", n, sum);


    return 0;
}
/*
    0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, ....


    Lab tasks:

        1. WAP to check 
*/

#include <stdio.h>

int main()
{
    int n1 = 0, n2 = 1, n3, n;

    printf("Enter n: ");
    scanf("%d", &n);

    printf("0 1 ");

    for (int i = 1; i <= n - 2; i++)
    {
        n3 = n1 + n2;
        printf("%d ", n3);
        n1 = n2;
        n2 = n3;
    }
}
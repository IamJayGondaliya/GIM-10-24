#include <stdio.h>

int main()
{
    int n;

    printf("Enter size: ");
    scanf("%d", &n);

    int a[5], b[5], c[5];

    printf("\tArray A\n");
    for (int i = 0; i < n; i++)
    {
        printf("Enter a[%d]: ", i);
        scanf("%d", &a[i]);
    }
    printf("\tArray B\n");
    for (int i = 0; i < n; i++)
    {
        printf("Enter b[%d]: ", i);
        scanf("%d", &b[i]);
    }

    // SUM in c
    for (int i = 0; i < n; i++)
    {
        c[i] = a[i] + b[i];
    }

    printf("\nArray a: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }

    printf("\nArray b: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", b[i]);
    }

    printf("\nArray c: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", c[i]);
    }
}

/*
    Lab task:

    Billing system.

    Enter total products:

    inp:
        price[i]
        qty[i]

    clc:
        amt[i]

    totalAmount
    GST =>  18%
    bill
*/
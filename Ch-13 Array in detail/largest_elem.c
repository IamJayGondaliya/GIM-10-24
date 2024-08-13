#include <stdio.h>

int main()
{
    int n, l = 0;

    printf("Enter size: ");
    scanf("%d", &n);

    int a[5];

    // input
    for (int i = 0; i < n; i++)
    {
        printf("Enter a[%d]: ", i);
        scanf("%d", &a[i]);

        if (a[i] > l)
        {
            l = a[i];
        }
    }

    printf("Array: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }

    printf("\nLargest: %d", l);
}
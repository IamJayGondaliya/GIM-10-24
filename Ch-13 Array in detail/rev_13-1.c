#include <stdio.h>

int main()
{
    int n;

    printf("Enter size: ");
    scanf("%d", &n);

    // 1D Array - dynamic
    int a[5], sum = 0;

    for (int i = 0; i < n; i++)
    {
        printf("Enter a[%d]: ", i);
        scanf("%d", &a[i]);

        sum += a[i];
    }

    for (int i = 0; i < n; i++)
    {
        printf("Array: %d\n", a[i]);
    }

    printf("Sum: %d\n", sum);
    printf("Avg: %.2f\n", (float)sum / (float)n);
}
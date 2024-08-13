#include <stdio.h>

int main()
{
    int n, rev = 0, ld;

    printf("Enter n: ");
    scanf("%d", &n);

    while (n != 0)
    {
        ld = n % 10;
        rev = rev * 10 + ld;
        n = n / 10;
    }

    printf("Reverse: %d", rev);
}
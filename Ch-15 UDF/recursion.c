#include "functions.c"

int main()
{
    int n = getInt();

    int sum = nSum(n);

    printf("Sum of %d: %d\n", n, sum);
}
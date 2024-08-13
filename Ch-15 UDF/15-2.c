#include "functions.c"

int main()
{
    int n = getInt();

    int a[5];

    arrayInput(a, n);

    arrayOutput(a, n);

    int ans = getArraySum(a, n);

    printf("Sum of array: %d", ans);
}

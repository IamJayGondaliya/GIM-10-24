#include "functions.c"

// Encapsulated
int main()
{
    int n = getInt();
    int a[5];

    arrayInput(a, n);
    arrayOutput(a, n);

    printf("Average: %.2f", getArrayAverage(a, n));
}
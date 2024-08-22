#include "functions.c"

int main()
{
    int n = getInt();
    int a[5];

    arrayInput(a, n);
    arrayOutput(a, n);

    sortAscending(a, n);
    arrayOutput(a, n);
}
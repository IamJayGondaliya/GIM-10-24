#include <stdio.h>

/*
    Function:
        - re-usable block of code.

    Type:
        - Buit in
            - printf, scanf, clrscr, getch, ...
        - UDF
            - TNRN
            - TSRN
            - TNRS
            - TSRS

    Syntax:

        return_type fun_name([parameters])
        {
            // CODE
            [return value]
        }

        return_type:
            - YES   =>  int, char, float
            - NO    =>  void
*/

void sum(int a, int b)
{
    printf("Sum of %d and %d: %d\n", a, b, a + b);
}

int getInt()
{
    int n;
    printf("Enter any number: ");
    scanf("%d", &n);
    return n;
}

void arrayInput(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("Enter a[%d]: ", i);
        scanf("%d", &a[i]);
    }
}
void arrayOutput(int a[], int n)
{
    printf("\nArray values\t: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
}

void sortAscending(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (a[i] > a[j])
            {
                a[i] = a[i] + a[j];
                a[j] = a[i] - a[j];
                a[i] = a[i] - a[j];
            }
        }
    }
}
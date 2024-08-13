#include <stdio.h>

/*
    2D array:

        - syntax:

            data_type  array_name[row][column];

            row     =>  no. of 1D arrays
            column  =>  no. of values in each 1D array

    Matrix:

         1 2 3
         4 5 6
         7 8 9

    Diagonal elements:

         1
           5
             9

    Anti-diagonal elements:

             3
           5
         7

    Cross-diagonal elements:

         1   3
           5
         7   9

    Border elements:

         1 2 3
         4   6
         7 8 9

*/
// Print 2D array in matrix form.
int main()
{
    int r, c;

    printf("Enter r: ");
    scanf("%d", &r);
    printf("Enter c: ");
    scanf("%d", &c);

    int a[10][10];

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            printf("Enter a[%d][%d]: ", i, j);
            scanf("%d", &a[i][j]);
        }
    }

    printf("MATRIX\n");
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }

    printf("DIAGONAL MATRIX\n");
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            if (i == j)
            {
                printf("%d ", a[i][j]);
            }
            else
            {
                printf("  ");
            }
        }
        printf("\n");
    }

    printf("ANTI-DIAGONAL MATRIX\n");
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            if (i + j == r - 1)
            {
                printf("%d ", a[i][j]);
            }
            else
            {
                printf("  ");
            }
        }
        printf("\n");
    }

    printf("CROSS-DIAGONAL MATRIX\n");
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            if (i == j || i + j == r - 1)
            {
                printf("%d ", a[i][j]);
            }
            else
            {
                printf("  ");
            }
        }
        printf("\n");
    }

    printf("BORDER ELEMENTS\n");
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            if (i == 0 || j == 0 || i == r - 1 || j == c - 1)
            {
                printf("%d ", a[i][j]);
            }
            else
            {
                printf("  ");
            }
        }
        printf("\n");
    }
}
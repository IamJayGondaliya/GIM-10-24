#include <stdio.h>

int main()
{
    for (int i = 1; i <= 7; i++)
    {
        for (int j = 1; j <= 6; j++)
        {
            if (
                ((i == 1 || i == 6) && (j >= 2 && j <= 4)) ||
                ((j == 1 || j == 5) && (i >= 2 && i <= 5)) ||
                (i >= 4 && (i == j + 1)))
            {
                printf("* ");
            }
            else
            {
                printf("  ");
            }
        }
        printf("\n");
    }
}
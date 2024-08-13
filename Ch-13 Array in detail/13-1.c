#include <stdio.h>

/*
    Array:
        - group
        - collection
        - collection of multiple values which must be of same datatype.

    Types of array:
        - Single Dimensional Array
            - 1D array
        - Multi Dimensional Array
            - 2D array
            - 3D array
            - 4D array
            .
            .
            - ND array

    1D array:
        - 1 Dimensional Array
        - collection of values.
        - syntax:

            datatype array_name[size];
*/

int main()
{
    int n;

    printf("Enter size: ");
    scanf("%d", &n);

    int a[10];

    for (int i = 0; i < n; i++)
    {
        printf("Enter a[%d]: ", i);
        scanf("%d", &a[i]);
    }

    for (int i = 0; i < n; i++)
    {
        printf("Value of a[%d]: %d\n", i, a[i]);
    }
}
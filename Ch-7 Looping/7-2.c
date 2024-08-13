#include <stdio.h>

/*
    - Exit control loop:
        - do while
        - syntax:

            // initialization
            do
            {
                // CODE
                // updation
            } while(condition);

    - Entry control loop:
        - for loop
        - syntax:

            for( initialization ; condition ; updation )
            {
                // statement(s)
            }

*/

int main()
{
    int y1, y2;

    printf("Enter year 1: ");
    scanf("%d", &y1);
    printf("Enter year 2: ");
    scanf("%d", &y2);

    for (; y1 <= y2; y1++)
    {
        if (y1 % 4 == 0)
        {
            printf("%d\t", y1);
        }
    }
}
#include <stdio.h>

/*
    Ch-7: Looping

        7.1:
            - what is loop
            - criterias of loop
            - types of loop
                - Entry control loop:
                    - while, for
                - Exit control loop:
                    - do while

            - while loop:
                - syntax:

                    // initalization
                    while(condition)
                    {
                        // statement(s)
                        // updation
                    }
*/

int main()
{
    int i = 1, n;

    printf("Enter ending point: ");
    scanf("%d", &n);

    // 1..N =>  ODD
    while (i <= n)
    {
        if (i % 2 == 1)
        {
            printf("%d ", i);
        }
        i++;
    }
}

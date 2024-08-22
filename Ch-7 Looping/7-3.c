#include <stdio.h>

/*
    Jumping statement:
        - break:
            - stops the further code compilation.
            - exit from any statement(loop/switch).
        - continue:
            - skip any step from the statement(loop/switch).
            - n: 20
            - sequence: 1 2 4 5 7 8 10 11 13 14 16 17 19 20
        - goto:
            - to jump to the specific line of code.
            - syntax:

                label:
                    // LINE

                goto label;


*/

int main()
{
    int i, n;

tmp:
    printf("Enter 1..20: ");
    scanf("%d", &n);

    if (n <= 0)
    {
        printf("ERROR: Enter in given range only...\n");
        goto tmp;
    }

    for (i = 1; i <= n; i++)
    {
        if (i > 20)
        {
            break;
        }
        if (i % 3 == 0)
        {
            continue;
        }
        printf("%d ", i);
    }
}
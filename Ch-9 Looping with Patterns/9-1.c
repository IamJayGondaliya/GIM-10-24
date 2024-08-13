#include <stdio.h>

/*

    1
    22
    333
    4444
    55555

    1
    12
    123
    1234
    12345

    1
    10
    101
    1010
    10101

    1
    A B
    1 2 3
    A B C D
    1 2 3 4 5

    1
    2 3
    3 4 5
    4 5 6 7
    5 6 7 8 9

*/

int main()
{
    int n = 1;
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("%c ", n + 64);
            n++;
        }
        printf("\n");
    }
}
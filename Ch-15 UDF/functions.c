#include <stdio.h>

/*
    Functions:
        - re-usable block of code.

    Types:
        - built in
            - printf, scanf, clrscr, getch
        - user defined
            - TNRN  => Take Nothing Return Nothing
            - TSRN  => Take Something Return Nothing
            - TNRS  => Take Nothing Return Something
            - TSRS  => Take Something Return Something

    Syntax of UDF:

        return_type fun_Name(parameters)
        {
            code;
            return value;
        }

    return_type:
        - value returned from the function.
        - if returns        => int, char, float
        - if not returns    => void
*/

void intro()
{
    printf("===========================================\n");
    printf("Hello !! this is my APP !!\nLorem Ipsum is simply dummy text of the printing and typesetting industry.\n");
    printf("===========================================\n");
}

void sum()
{
    int a, b;

    printf("Enter a: ");
    scanf("%d", &a);
    printf("Enter b: ");
    scanf("%d", &b);

    printf("Sum of %d and %d: %d\n", a, b, a + b);
}

void sub()
{
    int a, b;

    printf("Enter a: ");
    scanf("%d", &a);
    printf("Enter b: ");
    scanf("%d", &b);

    printf("Sub of %d and %d: %d\n", a, b, a - b);
}

// TSRN
void doSum(int a, int b)
{
    printf("Sum of %d and %d: %d\n", a, b, a + b);
}
void doSub(int a, int b)
{
    printf("Sub of %d and %d: %d\n", a, b, a - b);
}

// TNRS
float getPi()
{
    return 3.14;
}

char getA()
{
    return 'A';
}

int getInt()
{
    int n;
    printf("Enter any number: ");
    scanf("%d", &n);
    return n;
}

// TSRS
int getSum(int a, int b)
{
    return a + b;
}

int getArraySum(int a[], int n)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += a[i];
    }
    return sum;
}

// Call by reference
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
    for (int i = 0; i < n; i++)
    {
        printf("a[%d]: %d\n", i, a[i]);
    }
}

// call by value
void nInput(int n)
{
    printf("Enter n: ");
    scanf("%d", &n);
    printf("UDF-N: %d\n", n);
}

// Nested functions
//  - calling another udf in any udf.
void first()
{
    printf("First\n");
}
void second()
{
    first();
    printf("Second\n");
}
void third()
{
    second();
    printf("Third\n");
}

float getArrayAverage(int a[], int n)
{
    int sum = getArraySum(a, n);
    float avg = (float)sum / (float)n;

    return avg;
}

/*
    Recursion:
        - function calls itself.
        - it must be used with certain condition.
*/

void count(int n)
{
    printf("Count: %d\n", n++);
    count(n);
}

void loop(int s, int e)
{
    printf("%d ", s++);
    if (s <= e)
    {
        loop(s, e);
    }
}

/*
    Repeatative actions:
        - n sum
        - n factorial

    n sum:

        n = 5;
        sum = nSum(5);

        5 + 4 + 3 + 2 + 1

        5 + nSum(4);    =>  n + nSum(n-1);
        4 + nSum(3);
        3 + nSum(2);
        2 + nSum(1);
        1
*/

int nSum(int n) // 5
{
    if (n <= 1)
    {
        return 1;
    }
    else
    {
        return n + nSum(n - 1);
        //     5 + nSum(4)                  => 5 + 10   => 15
        //         4 + nSum(3)              => 4 + 6    => 10
        //             3 + nSum(2)          => 3 + 3    => 6
        //                 2 + nSum(1)      => 2 + 1    => 3
        //                     1            => 1
    }
}
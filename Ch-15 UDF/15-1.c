#include "functions.c"

int main()
{
    printf("START...\n");
    intro();

    int a, b;

    printf("Enter a: ");
    scanf("%d", &a);
    printf("Enter b: ");
    scanf("%d", &b);

    doSum(a, b);
    doSub(a, b);

    printf("END...\n");
}
// Compare 2 numbers
#include <stdio.h>
int main()
{
    int a, b;

    printf("Enter the number:\n");
    scanf("%d%d", &a, &b);

    if (a > b)
    {
        printf("a > b");
    }
    else if (b > a)
    {
        printf("b > a");
    }
    else
    {
        printf("a==b");
    }
    return 0;
}
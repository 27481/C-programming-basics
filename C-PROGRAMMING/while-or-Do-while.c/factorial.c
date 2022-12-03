#include <stdio.h>
int main()
{
    int n=1, i, factorial;
    printf("Enter an integer whose factorial you want to find out:");
    scanf("%d", &n);

    // if -ve integer is choosen then we cant find out its factorial
    if (n < 0)
    {
        printf("factorial can not be found out as number entered is negative");
    }
    else
    {
        factorial = factorial * (n - 1);
        printf("Factorial of %d is %d", n, factorial);
    }
    return 0;
}
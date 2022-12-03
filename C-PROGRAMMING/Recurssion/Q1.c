#include <stdio.h>

long factorial(int n)
{
    if (n == 0 || n == 1)
    {
        printf("Factorial is:\n1");
    }
    else
    {
        return (n*factorial(n-1));
    }
}
int main()
{

    int number;
    long fact;

    printf("Enter the number whose factorial you want to find out:");
    scanf("%d", &number);

    fact = factorial(number);
    printf("Factorial of %d is %d\n", number, fact);

    return 0;
}
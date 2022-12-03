// WAP to print factorial of given number
#include <stdio.h>
int main()
{
    int n;
    int i = 0, factorial = 1;
    printf("Enter the value of n %d\n", n);
    scanf("Enter the value of n %d\n", &n);

    for (i = 1; i <= n; i++)
    {
        factorial *= i;
    }
    printf("The value of factorial %d is %d", n, factorial);
    return 0;
}
#include <stdio.h>

// factorial() // function prototype
// int factorial( int a){

// }
int main()
{
    int x, factorial;
    printf("Enter the number whose factorial you want to find out :\n", x);
    scanf("%d", &x);

    if (x == 1 || x == 0)
    {
        printf("The factorial of no. is :\n1");
    }
    else
    {
        factorial = x * (x - 1);
        x++;

    printf("factorial of the number %d is :%d\n", x, factorial);
    }
    return 0;
}

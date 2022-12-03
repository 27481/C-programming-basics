// wap a program to print the sum of the first then natural numbers using while loop

#include <stdio.h>
int main()
{
    int i, sum = 0, n = 10;

    // for (i = 0; i <= n; i++)
    // {
    //     sum += i;
    // }

    while (i<=n)
    {sum +=1;
    i++;
    }
    
    printf("The value of sum(1  to 100) is %d", sum);
    return 0;
}
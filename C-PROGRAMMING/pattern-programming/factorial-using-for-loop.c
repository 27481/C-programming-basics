#include <stdio.h>
int main()
{
    int num, i, fact = 1; // initializing fact = 1 to avoid garbage value 

    printf("Enter the numbers whose factorial you want to find:\n");
    scanf("%d", &num);

    if (num == 1 || num == 0)
    {

        printf("factorial is :1 \n");
    }
    // else if (num > 0)
    // {
        for (i = 1; i <= num; i++)
        {

            fact = fact * i; 
        }
        printf("The factorial of %d is:%d\n", num, fact);
    // }

    return 0;
}

#include <stdio.h>
int main()
{
    // armstrong numbers are 153 = 1cube+5cube+3cube

    int temp, rem, sum = 0, n;
    printf("Enter n:");
    scanf("%d", &n);
    temp = n;
    while (n>0)
    {
        rem=n%10; // using modulus operator to obtain last digit
        sum = sum + rem * rem * rem;
        n = n/10;
    }
    if(temp == sum)
    {
        printf("armstrong number");
    }
    else
    {
        printf("not a armstrong number");
    }

    return 0;
}
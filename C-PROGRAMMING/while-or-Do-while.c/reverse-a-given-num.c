#include <stdio.h>
int main()
{
    int rem, n;

    printf("Enter n:");
    scanf("%d", &n);

    while (n > 0)
    {
        rem = n % 10; // by using modulus operator we will get the remainder
        printf("%d", rem);
        n = n / 10;
    }
    return 0;
}

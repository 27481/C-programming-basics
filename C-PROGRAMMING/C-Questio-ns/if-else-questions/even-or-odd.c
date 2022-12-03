#include <stdio.h>
int main()
{
    int n;

    printf("Enter the number to check:\n");
    scanf("%d", &n);

    if (n % 2 == 0)
    {
        printf("%d is even number", n);
    }
    else if(n % 2 != 0){
        printf("%d is not even number", n);
    }
    return 0;
}
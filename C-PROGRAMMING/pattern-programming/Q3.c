/*
print the following pattern

*****       n
****        n-1
***         n-2
**          n-3
*           n-4

*/

#include <stdio.h>
int main()
{
    int i, j, n;

    printf("Enter the number:\n");
    scanf("%d", &n);

    for (i = n; i >= 1; i--)
    {
        for (j = 1; j <= i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}

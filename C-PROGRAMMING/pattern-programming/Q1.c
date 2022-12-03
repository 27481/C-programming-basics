/*
print the following format
******
******
******
******
******
*/
#include <stdio.h>
int main()
{
    int i, j, n;
    printf("Enter numer:");
    scanf("%d", &n);

    for (i = 1; i < n; i++) // for iterating rows n=6
    {
        for (j = 1; j <= n; j++) // for iterating columns
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
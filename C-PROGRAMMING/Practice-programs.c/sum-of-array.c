#include <stdio.h>
int main()
{

    int a[10], i, sum = 0;

    for (i = 0; i <= 10; i++)
    {

        printf("\nEnter the elemnt of the arrays:"); // filling the array
        scanf("%d", &a[i]);
    }
    // for finding sum of array
    for (i = 0; i < 10; i++)
    {
        sum = sum + a[i];
    }
    printf("\nSum of Array Numbers = %d", sum);
}
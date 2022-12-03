/*
print the following pattern 
*
**
***
****
*****
*/

#include<stdio.h>
    int main(){
    int i, j, n;

    printf("Enter n:\n");
    scanf("%d", &n);

    for ( i = 1; i <= n; i++) // for iterating rows 
    {
        for ( j = 1; j <= i; j++) // for iterating columns 
        {
            printf("*");
        }
        printf("\n");
    }
    
    return 0;
}
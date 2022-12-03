/*
Check a number even or odd whether it is even or odd without using % operator */

/*
 Binary form of even number has in last digit as 0
 Binary form of odd number 1 in last digit

 SO we can use (BIT-wise AND) operator which works on binary number 
 
 */


#include <stdio.h>
int main()
{
    int number;
    printf("Enter the you want to check:\n");
    scanf("%d", &number);

    if (number&1)
        printf("Odd number");

    else
    printf("Even number");
    
    




}
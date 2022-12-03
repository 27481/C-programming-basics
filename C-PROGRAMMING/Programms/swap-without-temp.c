// Swapping of 2 integers without using temp variable

#include <stdio.h>
int main()
{

    int a, b;

    // Taking input from user

    printf("Enter two numbers:\n");
    scanf("%d%d", &a, &b); 

    // Logic to swap 2 num without using temp variable
    a=a+b;  // b is 20 here still 
    b=a-b;   // b = number which was stored in a 
    a=a-b;

    printf("a=%d b=%d", a, b);

    /*
    a=10 b=20
    a=30 b=20
    a=30 b=10
    a=20 b=10

    */

    return 0;
}
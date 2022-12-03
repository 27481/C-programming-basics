// Swapping of 2 integers 
#include<stdio.h>
    int main(){
    
    int a, b, temp;

    printf("Enter first variable:\n");
    scanf("%d%d", &a, &b);

    // logic for swapping 
    temp = a;
    a=b;
    b=temp;

    printf("Number after swapping are %d and %d", a, b);
    return 0;
}
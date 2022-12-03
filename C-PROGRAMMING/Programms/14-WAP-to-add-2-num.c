#include<stdio.h>
#include<conio.h>

int Adding(int a, int b){
    
    int a, b;

    printf("Enter 1st numbers:\n");
    printf("Enter second number:\n");
    scanf("%d", &a);
    scanf("%d", &b);

    printf("SUM is %d", (a+b));

    return 0;
}
    int main(){
    
    int g, h;

    printf("Sum of %d and %d is %d:\n", g, h, Adding(g,h));


    // return 0;
}
// Decision Making Instructions in C
// 1= if-else statement 
// 2= switch statement

// C programm to check whether a number is even or odd 

#include<stdio.h>
    int main(){
    int a, b;
    printf("Enter a number\n");  
    scanf("%d", &a);

    if(a%2==0){
        printf("%d is even\n", a);
    } 
    else{   
        printf("%d is odd\n", a);  
    }
    return 0;
}
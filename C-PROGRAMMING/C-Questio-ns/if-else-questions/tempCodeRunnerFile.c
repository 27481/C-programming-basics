#include<stdio.h>
    int main(){
    int n;
    rintf("Enter the number to check:\n");
    scanf("%d", &n);

    if (n % 5 == 0)
    {
        printf("%d is divisible by 5 ", n);
    }
    else if(n % 5 != 0){
        printf("%d is not divisble by 5", n);
    }
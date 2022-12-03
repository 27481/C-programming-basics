#include<stdio.h>
    int main(){
    int n;
    printf("Enter the number to check:\n");
    scanf("%d", &n);

    if (n % 5 == 0) // modulus operator to check divisibility 
    {
        printf("%d is divisible by 5 ", n);
    }
    else if(n % 5 != 0){
        printf("%d is not divisble by 5", n);
    }
    return 0;
}
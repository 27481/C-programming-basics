#include<stdio.h>
    int main(){
        int n;
    printf("Enter the 1st number");
    scanf("%d", &n);


    if(n>0){
        printf("Given number is +ve");
    }

    else if(n<0){
        printf("Given number is -ve");
    }
    else{
        printf("Number is zero");
    }
    return 0;
}
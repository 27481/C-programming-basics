//WAP to check wheater a given number is prime or not using loops

//This is not the best best method to solve this problem 
#include<stdio.h>
    int main(){
        int i;
        int n =5, prime=0;
    for (i=3; i<n; i++){
        if(n%i==0 ){
            prime = 0;
            break;
        }

    }
    if (prime==0 && n!=2){
        printf("This is not a prime number");
    }
    else{
        printf("This is a prime number");
    }
    
    
    
    return 0;
}
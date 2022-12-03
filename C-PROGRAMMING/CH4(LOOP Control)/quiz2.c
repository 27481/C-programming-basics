// WAP a program to print first n natural numbers using do-while loop 

// input : 4

// output : 1
//          2
//          3
//          4

#include<stdio.h>
    int main(){
    int i=0;
    int n;
    printf("Enter the value of n\n");
    scanf("%d", &n);

    do{
        printf("The number is %d\n", i+1);
        i++;

    }while(i<n);
    
    return 0;
}
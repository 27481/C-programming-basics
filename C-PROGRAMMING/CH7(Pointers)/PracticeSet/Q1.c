// WAP to print the address of a variable  use this address to get the value of this variable  

#include<stdio.h>
    int main(){
    int a=6;
    int *ptr;
    ptr = &a;
    printf("The address of variable a is %u\n", a); 
    printf("The address of variable a is %u\n", ptr); // 
    printf("The address of variable a is %d\n", *ptr); // value of that address 

    return 0;
}  
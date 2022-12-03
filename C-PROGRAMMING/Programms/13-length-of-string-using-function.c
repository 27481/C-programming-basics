/*
waithout using predefined fucntion
int strlen(char*)  ---> here function is returning an    
                        integer value which is lenght 

here in the arugment of the function we are passing an address of char type 
char* = means function will not take character as an argument but address of character block

*/
#include<stdio.h>
#include<conio.h>
#include<string.h>

    int main(){
    
    char s[20]; // declaring char type array with 20 element 

    int a;
    printf("Enter a string:\n");
    gets(s);    // taking string as input s == &s[0] ie  address of array's first block 0th indexing 


    a=strlen(s);
    printf("Lenght of %s is %d",s ,a);

    return 0;
} 
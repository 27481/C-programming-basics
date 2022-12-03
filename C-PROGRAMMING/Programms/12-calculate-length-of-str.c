/*WAP to calculate lenght of a string 

This can be done in 2 ways 

1] without using predefined functions 
2] with using predefined function
*/ 


// 

#include<stdio.h>
#include<conio.h>
    int main(){
    
    char s[20]; // making a char array with size 20 name s
    int i;
    printf("Enter a string:\n");
    gets(s); // s==&s[0] 0th index of array 

    // using for loop 


    for ( i = 0; s[i]!=NULL; i++);  // This for loop is empty so it does not have any curly brakets only contains semicolon at the end to terminate the line 


    printf("Lenght is %d", i);



    return 0;
}
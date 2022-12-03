#include<stdio.h>
#include<conio.h>
#include<string.h>

// gets(&s[0]) or gets(s) both are same 

    int main(){

        char s[20];
        printf("Enter a string:\n");
        gets(s); // writting s in gets so that the function will access to memory block through pointers 

        strrev(s); // passing s means passing the address of the our char array 
        
        printf("%s", s);


    return 0;
}

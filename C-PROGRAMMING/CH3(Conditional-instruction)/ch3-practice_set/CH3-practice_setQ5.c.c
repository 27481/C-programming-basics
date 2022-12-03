// write a program to determine whether a character entered by the user is lowercase or not 
#include<stdio.h>
    int main(){
        char ch;
    //  97-122 = a-z
    printf("Enter the character\n");
    scanf("%c", &ch);
    if (ch<=122 && ch>=97){
        printf("it is lowercase");
    }
    else
    {
    printf("It is not lowercase");
    }
    
    return 0;
}


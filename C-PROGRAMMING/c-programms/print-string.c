#include<stdio.h>
    int main(){
    char array[100];
    
    printf("enter a string\n");
    scanf("%s", &array);

    // %s is used to retrieve string from user


    printf("You entered the string %s\n", array);
    
    return 0;
}
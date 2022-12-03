#include <stdio.h>
int main()
{
    // char str[] = "UTKARSH";
    char str[] = {'U','T', 'k' ,'A' ,'R' ,'S', 'H', '\0'};
     char *ptr = str;//making a pointer and assining it to str 
    while (*ptr!= '\0'){
        printf("%c", *ptr);
        ptr++;
    }
    return 0;
}
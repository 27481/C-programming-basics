// A function prototype is simply the declaration of function which contains functions name,parameters and return-type

// syntax = return-type function-name(type arguments);

// function definition = function definitions contains the block of code to perform a specific task without semicolon

// EXample=

#include <stdio.h>
void max(int a, int b); // function prototype declaration
int main()
int a, b;
{
    int a, b;
    printf("Enter number 1 : %d", a);
    scanf("%d", &a);

    printf("Enter number 1 : %d", b);
    scanf("%d", &b);

    max(100, 200);

    return 0;
}

void max(int a, int b)
{ // Function definition
int a, b;

    if (a > b)
        printf("%d grater than %d", a, b);
    else
        printf("%d is less than %d", a, b);
}
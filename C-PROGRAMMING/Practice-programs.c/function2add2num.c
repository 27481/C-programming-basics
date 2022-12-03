// Function to add 2 numbers using function in c origramming
// Syntax=  type function_name(parameter list)

#include <stdio.h>
int add(int a, int b); // function prototype
int main()
{
    int a, b;
    add(15, 15);

    return 0;
}
int add(int a, int b)
{
    printf("%d + %d is the summ of a and b is = %d\n", a, b, (a, b));
}




// c program to add 2 number without using any function


// #include <stdio.h>
// int main()
// {
//     int num1, num2, result;
//     printf("Enter the number 1\n");
//     scanf("%d", &num1);
//     printf("Enter the number2\n");
//     scanf("%d", &num2);

//     result = num1 + num2;
//     printf("%d + %d = %d",num1, num2, result);

//     return 0;
// }
// write a program having a variable i print the address of i pass this variable to a function and print its address are these addresses same? why?xz

#include <stdio.h>
void printAdd(int a)
{
    printf("The address of variable a is %u\n", &a);
}
int main()
{
    int i = 4;
    printf("the value of variable a is %d\n", i);  //1
    printAdd(i);  //2
    printf("The address of variable i is %d\n", &i);  //3
    return 0;
}

// factorial formula =
// Factorial(n)= factorial(n-1)Xn

#include <stdio.h>
int factorial(int x);

int main(){

    int a;
    printf("Enter the number whose factorial you want to find out:\n", a);
    scanf("%d", &a);
    printf("The value of factorial %d is %d", a, factorial(a));
    // return 0;
}
int factorial(int a){
    printf("Calling factorial(%d)\n", a);
    if (a == 1 || a == 0)
    {
        return 1;
    }
    else
    {
        return a * factorial(a - 1);
        a++;
    }
}


// recursion is sometimes the most direct way to code an algorithm
// The condition which does not call the function any further in a recursive funciton is called as the base condition
// sometimes, due to a mistake made by the programmer, a recursive function can keep running without returning resulting in a memory error 
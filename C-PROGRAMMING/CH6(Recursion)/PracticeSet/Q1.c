//  Write a program using functions to find average of three numbers

#include <stdio.h>
float average(int a, int b, int c);

int main(){
    int a, b, c; //Local variables 1
    
    printf("Enter the value of a\n");
    scanf("%d", &a); // &a = we are taking memory address of a and assigning it to memory adress of %d
    printf("Enter the value of b\n");
    scanf("%d", &b);
    printf("Enter the value of c\n");
    scanf("%d", &c);

    printf("The value of average is %f", average(a,b,c)); 
    return 0;
}
float average(int a, int b, int c){  // Local variables of float average() function
    float result;
    result = (float)(a + b + c) / 3;
    return result;
}
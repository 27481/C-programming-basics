// conditional operators =
// A short hand "if-else" can be written using the conditional or ternary operators

// condition? expression-if-true : expression-if-false 



#include<stdio.h>
    int main(){
    int a;
    printf("Enter a\n");
    scanf("%d", &a);
      // One liner 
    (a<5)? printf("A is less than 5"): printf("A is less than 5");
    return 0;
}
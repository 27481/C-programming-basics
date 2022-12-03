// Largest of 2 number

#include <stdio.h>
int main()
{
    int A, B;
    printf("Enter the number A & B:\n");
    scanf("%d%d", &A, &B);

    if (A > B)
    {
        printf("A is greater than B: %d \n", A);
    }
    else{
            printf("B is grater than A: %d\n", B);
    }
    if (A == B)
        {
        printf("Both the numbers are equal\n");
        }

    return 0;
}
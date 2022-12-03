// to find the discriminant and calculate roots and their nature

#include <stdio.h>
int main()
{
    float x, R1, R2, a, b, c;

    printf("Enter a,b,c:\n");
    scanf("%d%d%d", &a, &b, &c);

    x = b *b - 4 *a *c;

    R1 = (-b + x) / (2 * a);
    R2 = (+b - x) / (2 * a);

    if (x > 0)
    {
        printf("%f Roots are real and unequal\n", x);
    }
    else if (x < 0)
    {
        printf("%f roots are unreal and imaginary\n", x);
    }
    else
    {
        printf("Roots are same:\n");
    }
    printf("ROOT1 = %f", R1);
    printf("R2 = %f", R2);

    return 0;
}
#include <stdio.h>
int main()
{
    int base, height, area;
    printf("Enter the length of base%d and height%d:\n", base, height);
    scanf("%d%d", &base, &height);

    area = 0.5 * base * height;
    printf("Area of the traingle is with base %d and height %d is %d \n", base, height, area);

    return 0;
}
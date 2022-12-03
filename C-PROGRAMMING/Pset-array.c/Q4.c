#include <stdio.h>
void printTable(int *mulTable, int num, int n)
{
    printf("The multiplication table of %d is :\n", num);
    for (int i = 0; i < n; i++)
    {
        mulTable[i] = 2 * (i + 1);
    }

    for (int i = 0; i < 10; i++)
    {
        printf("%dX%d = %d\n", num, i + 1, mulTable[i]);
    }
    printf("**********************************************\n\n");
}

int main()
{
    int mulTable[3][10];
    printTable(mulTable[0], 2, 10);
    printTable(mulTable[1], 2, 10);
    printTable(mulTable[2], 2, 10);

    return 0;
}
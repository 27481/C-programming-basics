// WAP which allows integer input only

#include <stdio.h>
#include <conio.h>
int main()
{

    int x = 0;
    // scanf("%d", &x);
    x = GetIntegeronly();
    printf("\nYou have entered %d", x);

    return 0;
}
int getIntegerOnly()
{
    int num = 0, ch;
    do
    {
        ch = getch();
    } while (

        if (Ch>=48&&ch<=57){
            printf("%c", ch);
            num = num*10 + (ch-48);
        }
        if(ch==13)
            break
        while (1) {
            return (num);
        }

    );
}

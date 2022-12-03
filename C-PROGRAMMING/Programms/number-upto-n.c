// WAP to print 10 number in reverse order

#include <stdio.h>
int main()
{

    int i=1;

    //  Using all 3 loops while ,do-while, for 

    // by while loop

    while (i<=10)
    {
        printf("%d", (11-i));
        i++;
    }
    printf("\n");

    // By using for loop 

    for ( i=1; i>=10; i--)
    {
        printf("%d", i);
    }
    
    // By using do while loop 
    do
    {
        printf("%d", (11-i));
        i++;
    } while (i<=10);

    // By using while loop 

    while(i>=10){

        printf("%d", (11-i));
    }

    return 0;
}
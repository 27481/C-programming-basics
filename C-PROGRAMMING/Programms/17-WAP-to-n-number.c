// WAP to print first 10 natural number

#include <stdio.h>
#include <conio.h>
#include <string.h>
int main()
{


    int num;
    int i=1;


// By using while loop 
    while(i<=10)
    {

        printf("%d", i);
        i++;
    }
    printf("\n");

    // By using for loop  ie initiliazation , condition flow
    for ( i=1; i<=10; i++)
    {
        printf("%d", i);
    }
    
    printf("\n");

    // By using do while loop 
    do
    {
        printf("%d", i);
        i++;

    }while(i<=10);
    
    return 0;
}

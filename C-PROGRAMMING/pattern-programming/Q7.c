/*
print the following pattern 

12345
12345
12345
12345
12345


*/


#include<stdio.h>
    int main(){
    int i, j;

    for ( j = 1; j <= 5; j++)
    {
        for ( i = 1; i <=5; i++)
        {
        printf("%d", i);
        }
        printf("\n");
    }
    return 0;
}
/*

*****
*****
*****
*****

*/


#include<stdio.h>
    int main(){
    int i,j;
    
    for ( i = 1; i <= 5; i++) // to print smaller loop 5 times 
    {
        for ( j = 1; j <= 5 ; j++) // to print one line of *****
        {
            printf("*", i);
        }
        printf("\n");
    }
    
    return 0;
}
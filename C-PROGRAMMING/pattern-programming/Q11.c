/*
Print the following pattern
A B C D E
A B C D E
A B C D E               //  ASCi value will be used 
A B C D E
A B C D E

*/
#include<stdio.h>
    int main(){
    int i,j;

    for(i=1; i<=5; i++){ // to repeat small 1 line code 5times 

        for(j=1; j<=5; j++){
            printf("%c", j+64);

        }
        printf("\n");
    }
    return 0;
}
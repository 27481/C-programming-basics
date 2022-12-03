#include<stdio.h>
#include<conio.h>
#include<string.h>
    int main(){

    int N;
    int i;

    printf("Enter the number from where you want to print n natural number:\n");
    scanf("%d", &N);

    for(i=1; i<=N; i++)
        printf("%d", i);
        

    return 0;
}
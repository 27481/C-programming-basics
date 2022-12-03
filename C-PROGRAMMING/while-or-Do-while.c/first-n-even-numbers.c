#include<stdio.h>
    int main(){
    int i=2, n;
    printf("Enter the number:\n");
    scanf("%d", &n);

    while (i<=n)
    {
        printf("%d\t", i);
        i=i+2;
    }

    
    return 0;
}

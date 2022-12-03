#include <stdio.h>
int main()
{
    int a, b, c;
    printf("Enter any three numbers:\n");
    scanf("%d%d%d, &a,&b,&c");

    if (a > b && a > c)
    {
        printf("Greatest number among 3 is %d", a);
    }
    else if (b>c){
        printf("Greatest number among all is %d",b);
    }
    else{
        printf("Greatest number among all is %d",c);
    }

    return 0;
}
//Here all if and elseif will be checked and when the condition is matched output will be printed


#include <stdio.h>
int main()
{
    int num;

    printf("Enter your number\n");
    scanf("%d", &num);

    if (num == 1){
        printf("Your number is 1\n");
    }                                        //these are called if else ladder 
    else if (num == 2)
    {
        printf("Your number is 2\n");
    }
    else if (num == 20)
    {
        printf("Your number is 2\n");
    }
    else{
        printf("It's not 1,2 or 3!\n");
    }

    return 0;
}
#include<stdio.h>
    int main()
    {
        int age;
        int vipPass = 0;
        vipPass = 1;
        int yes;
    printf("Enter your age\n");
    scanf("%d", &age);
    printf("If you have VIP Pass: \n");
    scanf("%d", &vipPass);
    
    if(vipPass == yes){
        printf("you can drive"); }
    else{
    printf("you cant drive");
    }

    //if (age <= 70 && age>=18)
    if((age <= 70 && age>=18)|| !(vipPass==1))
    {
        printf("You are above 18 and below 70,you  drive\n");
    }
    else{
        printf("You cannot drive");
    }
    return 0;
   }
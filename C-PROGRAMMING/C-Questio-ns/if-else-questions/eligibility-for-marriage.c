#include <stdio.h>
int main()
{
    int age;
    char MartialStatus, Gender;

    printf("Enter MartialStatus, Gender, Age : (E.g m,f,25):");
    scanf("%c,%c,%d", &MartialStatus, &Gender, &age);

    if (MartialStatus == 'm')
    {
        printf("You can not marry:");
    }
    else if (MartialStatus == 'u')
    {
        if (Gender=='m')
        {
            if (age >= 21)
            {
                printf("You can marry:");
            }
            else
            {
                printf("you can not marry:");
            }
            else if (Gender=='f')
            {
                if (age >= 18)
                {
                    printf("You can marry:");
                }
                else
                {
                    printf("You can not marry!");
                }
                else
                {
                    printf("Invaild input Gender");
                }
                else
                {
                    printf("Invalid input Gender");
                }
            }
            else
            {
                printf("Invalid input Gender");
            }
        }
    }
    printf("Invalid input Martial Status");
    
    return 0;
}
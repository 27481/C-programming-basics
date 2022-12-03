// WAP a program to find out whether a student is pass or fail; if it requires total 40% and atleast 33% in each subject to pass Assume 3 subject and take marks as an input from the user 



#include <stdio.h>
float main()
{
    int physics, chemistry, maths;
    int total;
    printf("Enter Physics Marks\n");
    scanf("%d", &physics);

    printf("Enter Chemistry Marks\n");
    scanf("%d", &chemistry);

    printf("Enter Maths Marks\n");
    scanf("%d", &maths);

    total = (physics + maths + physics)/3;
    if ((total<40) || physics<33 || maths<33 || chemistry<33){

    }
    else{
        printf("Your total percentage is %d and you are pass\n",total);
    }
    return 0;
}
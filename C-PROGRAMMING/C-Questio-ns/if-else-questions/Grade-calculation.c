/*
WAP to calculate grade,based on average of marks 

if average is more than or equal to 60 then grade is A 
if average is between 50 and 60 then grade is B
if average is bw 40 and 50 then grade is C
else grade is F 

*/

#include<stdio.h>
    int main(){
    int avg, RollNumber, maths, english, physics, total;

    printf("Enter the Roll number:\n");
    scanf("%d", &RollNumber);

    printf("Enter the marks of student in 3 subjects\n:");
    scanf("%d%d%d", &maths, &english, &physics);

    total = (maths+english+physics);
    avg = total/3.0;

    printf("\n Total is %d\n", total);
    printf("\n Average is %d\n", avg);

    if (avg>=60)
    {
        printf("\nGrade :A");
    }
    else if((avg>=50)&&(avg<=60)){

        printf("\n Grade:B");
    }
    else if((avg>=40)&&(avg<=60)){
        
        printf("\n Grade:C");
    }
    else{
        printf("\n GradeF:");
    }
    return 0;
}

// if average is more than or equal to 60 then grade is A 
// if average is between 50 and 60 then grade is B
// if average is bw 40 and 50 then grade is C
// else grade is 
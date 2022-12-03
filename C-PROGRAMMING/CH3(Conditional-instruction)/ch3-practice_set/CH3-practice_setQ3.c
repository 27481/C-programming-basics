//Calculate income tax paid by an employee to the government as per the slabs metioned below:

// income slabs  Tax
// 2.5L-50L      5%
// 5.0L-10.0L    20%
// Above 10.0L   30%

// Note that there is no tax below 2.5L.Take income amount as an input from the user 


#include<stdio.h>
    int main(){
    int tax = 0, income;
    printf("Enter your income\n");
    scanf("%f, &income");

    if(income>=250000 && income<=500000){
        tax = tax + 0.05*(income - 250000);
    }

    if(income>= 500000 && income <=1000000)
    {
        tax = tax + 0.20 * (income - 500000);
    }
    if (income >= 1000000)
    {
        tax = tax + 0.05*(income - 500000);  
    }
    printf("Your net income tax to be paid is%f\n");
    return 0;
}
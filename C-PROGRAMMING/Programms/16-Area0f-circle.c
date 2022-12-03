#include<stdio.h>
#include<conio.h>
#include<string.h>
    int main(){
    
    int Radius;
    float area;

    printf("Enter radius of the circle whose area you want to find out:\n");
    scanf("%d", &Radius);

    area = 3.14*Radius*Radius;

    printf("Area is %f:\n", Radius);


    return 0;
}
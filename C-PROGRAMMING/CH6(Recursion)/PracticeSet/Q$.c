// what will the follwing the line produce in c program
// :
//    printf("%d %d %d %d \n, a, ++a,a++");


#include<stdio.h>
    int main(){
        int a=3;
    printf("%d %d %d\n", a, ++a, a++);  // arugments passed in printf will be printed from right to left acc to gcc compiler 
    return 0;
}
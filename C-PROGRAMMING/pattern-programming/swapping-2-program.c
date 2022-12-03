// #include<stdio.h>
//     int main(){
    
//     int a, b, temp;

//     printf("Enter the digits A :\n");
//     scanf("%d", &a);

//     printf("Enter the digits B :\n");
//     scanf("%d", &b);

//    // one varible can store one value at a time , putting 2nd value in it will overwrite 1st variable 

// // Logic to swap 2 number using 3rd variable 

//     temp = a;  // storing a value in temp varible as backup
//     a = b;    // assigning b value to a so, a is storing b value 
//     b = temp; // now , assigning  temp value to b ie temp is holding a value 


//     printf("The number after swapping is: a= %d and b= %d", a, b);

//     return 0;
// }


#include<stdio.h>

int swap2num( int a, int b){
    int a, b, temp;

    // printf("Enter the number a:\n");
    // scanf("%d", &a);

    // printf("Enter the number b:\n");
    // scanf("%d", &b);


    temp = a;  // storing value of a in 3rd variable temp 
    a = b; // storing value of b in a 

    b = temp; // storing value of temp in b , temp contains a value 

    printf("After swapping a is: %d\n", a);
    printf("After swapping a is: %d\n", b);

}
    int main(){
        int x, y;

        printf("Enter the number a:\n");
        scanf("%d", &x);

        printf("Enter the number a:\n");
        scanf("%d", &y);



        swap2num(int x, int y);

        printf("the nmber after swapping is %d", swap2num);


    return 0;
}
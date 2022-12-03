//Create an array of 10 numbers verify using pointers arithmetic that (ptr +2) points to the third element where ptr is a pointer pointing to the first element of the array //

#include<stdio.h>
    int main(){
    int arr[10];
    // int *ptr = &arr[0]; // pointing to the address of 1st element in array 
    int *ptr = arr;  // pointing to the address of 1st element in array
    ptr = ptr+2;
    if(ptr==&arr[2]){
        printf("These point to the same location");
    }
    else{
        printf("These point to the same location");
    }
    return 0;
}




#include<stdio.h>
void printArray(int *ptr, int n){
    for (int i = 0; i < n; i++){
        printf("The value of element %d is %d\n", i+1, *(ptr+i));
    }
    ptr[2] = 5555; // This value will be change in arr of main as well 
    
}
    int main(){
    int arr[] = {1,2,3,3546,34,645,23};
    printArray(arr, 7);
    printf("%d", arr{2});
    return 0;
}
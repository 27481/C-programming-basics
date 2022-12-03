#include <stdio.h>
int main()
{
    // int i = 34;
    // int *ptr = &i;  // ptr me i ka address store hogaya 
    // printf("The value of ptr is %u\n", ptr);
    // ptr = ptr - 1;
    // ptr = ptr + 1;
    // printf("The address of i is %u\n", ptr);



    // char c = 34;
    // char *ptr = &c;
    // printf("The value of ptr is %u\n", ptr);
    // ptr = ptr + 1; // we can move pointer to next address by adding ptr = ptr + 1
    // ptr = ptr + 1;
    // printf("The value of ptr is %u\n", ptr);



    float f = 34;
    float *ptr = &f;
    printf("The value of ptr is %u\n", ptr);
    ptr = ptr + 1; // we can move pointer to next address by adding ptr = ptr + 1
    ptr = ptr + 1;
    printf("The value of ptr is %u\n", ptr);


    

    return 0;
}

/* create a 2d array by taking input from the user .Write a display function to print the content of this 2D array or the screen */


#include<stdio.h>
void display(int number_1, int number_2,  int marks[number_1][number_2]){
    for (int i = 0; i < number_1; i++)
    {
        for (int j = 0; i < number_2; i++)
        {
            printf("The marks of student %d in subject %d is %d:\n", i+1, j+1, marks[i][j]);
        }
        
    }
    
}

    int main(){
        int number_1, number_2, marks;
        display(number_1, number_2, marks);
    
    return 0;
}
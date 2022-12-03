#include <stdio.h>
int main()
{
    int n_student = 3;
    int n_subjects = 5;

    int marks[3][5]; // 2D array
    for (int i = 0; i < n_student; i++)
    {
        for (int j = 0; j <n_subjects; j++){
            printf("Enter the marks of students %d in student %d\n", i+1, j+1);
            scanf("%d", &marks[i][j]);

        }
    }

    for (int i = 0; i < n_student; i++)
    {
        for (int j = 0; j <n_subjects; j++){
            printf("Enter the marks of students %d in student %d\n", i+1, j+1);
            // scanf("%d", marks[i][j]);

        }
    }
    return 0;
}
#include <stdio.h>

void reverse(int *arr)
{
    int temp, n;
    for (int i = 0; i < (n / 2); i++)
    {

        temp = arr[i];
        arr[i] = arr[n - i - 1];
        arr[n - i - 1] = temp;
    }
}
int main()
{
    int arr[7]
    int arr[1, 2, 3, 4, 5, 6, 7]
    reverse(arr);
    return 0;
}
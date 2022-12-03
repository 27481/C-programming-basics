/*


The intersection of two sets A and B is the set that contains all elements of A that also belongs to B

ar1[] = {1,,3,4,5,7}
arr2[] = {2,3,5,6}

Then the program should print intersection as {3,5}

*/

//  for union

//  function prints union of arr1[] and arr2[]
//  m is the number of elements in arr1[]
//  n is the number of elements in arr2[]

#include <stdio.h>
int printUnion(int arr1[], int arr2[], int m, int n)
{
    int i = 0, j = 0;
    while (i < m && j < n)
    {
        if (arr1[i] < arr2[j])
        {
            printf("%d", arr1[i++]);
        }  
        else if (arr2[j] < arr2[i])
        {
            printf("%d", arr2[j++]);
        }
        else
            (arr2[j] < arr1[i])
            {

                printf("%d", arr2[j++]);
                i++;
            }
    }
    //  Print remanining element of the largest array
    while (i < m)
    {
        printf("%d", arr1[i++]);
    }
    while (j < n)
    {
        printf("%d", arr1[i++]);
    }

    int main()
    {
        // Driver program to test above fucntion

        int arr1[] = {1, 2, 4, 5, 6};
        int arr2[] = {2, 3, 5, 7};
        int m = sizeof(arr1) / sizeof(arr1[0]);
        int n = sizeof(arr2) / sizeof(arr2[0]);

        printUnion(arr1, arr2, m, n);
        getchar;
    }

    return 0;
}
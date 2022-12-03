// Reversing a string without using strrev() function

#include<stdio.h>
#include<conio.h>
#include<string.h>
    int main(){

        char s[50], ch;
        int i, l;

        printf("Enter a string:\n");
        gets(s);
        for(l=0; s[l]; l++)
        {

            for(i=0; i<l/2; i++)
            {

                // Logic for swapping 
                ch=s[i];
                s[i]=s[l-1-i];
                s[l-1-i]=ch;

            }
        }
        printf("Reverse is %s", s);

    return 0;
}
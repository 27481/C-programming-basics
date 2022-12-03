// getch() is used to hold the console(output) window on the screen (usually, after the whole program run is completed) till the user enters a key from keyboard. However, the character entered is not displayed on screen. For that you will have to use getche() function. Both functions are present in conio.h header file.

// To make getch() work we have to add a header file of conio.h, because getch() is not a standard library function.



#include<stdio.h>
#include<conio.h>

int fib(int n){

    if(n==1||n==2){
        return(1);
    }
    else
    return(fib(n-1)+ fib(n-2));
}

    int main(){
    //  fibonacci series = 1 1 2 3 5 8 13 21 34....
    // solving With recurssion
    
    int fib(int);
    int i, n;

    printf("Enter how many fibonacci series you want to see:\n");
    scanf("%d", &n);

    for(i=0; i<=n; i++)
    {
        printf("%d", fib(i));
        // getch();
    }
    return 0;
}
int fib(int n){

    if(n==1||n==2){
        return(1);
    }
    else
    return(fib(n-1)+ fib(n-2));
}
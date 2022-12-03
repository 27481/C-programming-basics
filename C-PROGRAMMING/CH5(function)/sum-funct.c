// jo function value accept karta hai use kahte hai parameter 
// jo function value return karta hai use kahte hai parameter ex= int sum(int a, int b)


#include<stdio.h>
// sum is a function which takes a and b as input and return as integer as an output
    int sum(int a, int b);  //function prototype declaration 

    int main(){
    int c;
    c =sum(2,15); // arguments = actual value given to function
    sum(2,5); // function call 

    return 0;  
}
int sum (int a, int b){ // here a & b are parameter which are place holders of the value
    int c;
    int result;
    c = a + b;
    return c; 
} 

// parameter = They are the values or variable plaeholders in the function definition ex= a & b

// Aarguments are the actual values passed to the function to make a call ex= 2 & 3

// A function can return one value at a time


//If the passed variable is changed inside the funciton , the function call doesnot change the valaue in calling the funtion 





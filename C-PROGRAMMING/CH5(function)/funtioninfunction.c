// Q1== WAP with three functions to print
// 1> Good morning which prints "Good Morning"
// 2> Good afternoon function which prints "Good Afternoon"
// 3> Good night function which prints "Good Night"

#include <stdio.h>
void goodmorning();
void goodAfternoon();
void goodNight();

int main()
{
    goodmorning();

    return 0;
}
void goodmorning()
{
    printf("Good morning eveyone\n");
    goodAfternoon();

}
void goodAfternoon()
{
    printf("Good Good Afternoon eveyone\n");
    goodNight();
}
void goodNight(){
        printf("Good Night eveyone\n");
    }

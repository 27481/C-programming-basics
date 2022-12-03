// The continue statment is used to immideately move to the next iteration of the loop

#include <stdio.h>
int main()
{
    int skip = 5;
    int i = 0;
// skip is treated as variable not as identifier
    while (i < 10)
    {
        if (i != skip)
            continue;
        else
            printf("%d", i);
    }
    return 0;
}
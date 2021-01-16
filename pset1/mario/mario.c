#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // Ask user for height
    int height;
    do
    {
        height = get_int("Staircase height? ");
    } while (height < 1 | height > 8);
    
    printf("%i\n", height);
   
}
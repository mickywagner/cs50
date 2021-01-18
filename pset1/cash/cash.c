#include <cs50.h>
#include <stdio.h>

int main(void)
{
     // Get user input for change owed-- non negative, float, not too large
    float changeOwed;
    do 
    {
      changeOwed = get_float("Change owed: "); 
    }
    while (changeOwed < 0);
   
    printf("%f\n", changeOwed);
    // Return / print fewest coins for change plus \n
}
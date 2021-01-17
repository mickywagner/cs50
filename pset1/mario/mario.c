#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // Get height of stairs
    int height;
    do
    {
        height = get_int("Height: ");
    } 
    while (height < 1 | height > 8);
    
    // Create loop for lines, spaces, and hashes
    for (int i = 0; i < height; i++)
    {
        for (int k = i; k < height - 1; k++) 
        {
            printf(" ");
        }
        
        for (int j = 0; j < i + 1; j++)
        {
            printf("#");
        }
       
        printf("  ");
       
        // build second pyramid
        for (int j = 0; j < i + 1; j++)
        {
            printf("#");
        }
        
        printf("\n");
    }
   
}

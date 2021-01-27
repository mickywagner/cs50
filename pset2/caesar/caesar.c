#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int main(int argc, string argv[])
{
    if (argc != 2) 
    {
        printf("Usage: ./caesar key\n");
        return 1; 
    }
    else
    {
        for (int i = 0, n = strlen(argv[1]); i < n; i++)
        {
            if (!isdigit(argv[1][i])) 
            {
            printf("Usage: ./caesar key\n");
            return 1;
            }
        }
    }
    
    // Convert string argument to integer
    int shiftAmount = atoi(argv[1]);
    printf("Success\n");
    printf("%i\n", shiftAmount);
    
    // Make sure command line argument is digits only
    // If not return 1 and print Usage: ./caesar key 
    
    // Prompt user for plaintext: as a string 
    
    // Output ciphertext for alphabetic character, non alpha characters stay the same
    // shift items according to ascii chart and loop around once finished
    // check if capital or lowercase
    
    // Finally print a newline and exit by returning 0
   
}
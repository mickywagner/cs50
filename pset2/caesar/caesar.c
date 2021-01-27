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
  
    string plaintext = get_string("plaintext: ");
    printf("plaintext: %s\n", plaintext);
    printf("ciphertext: ");
    
    for (int i = 0, n = strlen(plaintext); i < n; i++)
    {
        if(islower(plaintext[i]))
        {
            char newCode = plaintext[i] + 2;
            printf("%c", newCode);
        }
        else if (isupper(plaintext[i]))
        {
            int newCode = plaintext[i] + 2;
            printf("%c", newCode);
        }
        else 
        {
            printf("%c", plaintext[i]);
        }
    }
    
    printf("\n");
    
   
    
   
   
    
    // Output ciphertext for alphabetic character, non alpha characters stay the same
    // shift items according to ascii chart and loop around once finished
    // check if capital or lowercase
    
    // Finally print a newline and exit by returning 0
   
}
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

    // Shift each character to 0 index alphabet so it loops when range is too high and print each char
    for (int i = 0, n = strlen(plaintext); i < n; i++)
    {
        if (islower(plaintext[i]))
        {
            int newCode = (plaintext[i] - 97 + shiftAmount) % 26 + 97;
            printf("%c", newCode);
        }
        else if (isupper(plaintext[i]))
        {
            int newCode = (plaintext[i] - 65 + shiftAmount) % 26 + 65;
            printf("%c", newCode);
        }
        else 
        {
            printf("%c", plaintext[i]);
        }
    }
    
    printf("\n");
    return 0;
   
}
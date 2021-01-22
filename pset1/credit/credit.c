#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // PROMPT USER FOR CREDIT CARD
    long creditCardNumber;
    do 
    {
        creditCardNumber = get_long("Number: ");
    }
    while (creditCardNumber < 0);
    
    if (creditCardNumber < 1000000000000 || creditCardNumber > 9999999999999999 ) 
    {
        printf("INVALID\n");
    }
    else 
    {
        // GETS digits not multiplied by 2
        long notMultiplied = creditCardNumber;
        int sum = 0;
        
        while (notMultiplied > 0)
        {
            sum = sum + notMultiplied % 10;
            notMultiplied = notMultiplied / 100;
        }
        
        // Get digits to multiply then add
        long multiplied = creditCardNumber / 10;
        int sumOfMultiplied = 0;
        
        while (multiplied > 0)
        {
            if (multiplied % 10 * 2 > 9) 
            {
                sumOfMultiplied = sumOfMultiplied + 1 + (multiplied % 10 * 2  % 10);
            }
            else 
            {
                sumOfMultiplied = sumOfMultiplied + (multiplied % 10 * 2);
            }
            
            multiplied = multiplied / 100;
        }
       
        int totalSumOfDigits = sum + sumOfMultiplied;
    
        // checks if card is valid and prints type
        if (totalSumOfDigits % 10 != 0) 
        {
            printf("INVALID\n");
        }
        else
        {
            if (creditCardNumber / 1000000000000000 == 4 || creditCardNumber / 1000000000000 == 4)
            {
                printf("VISA\n");
            }
            else if (creditCardNumber / 10000000000000 == 34 || creditCardNumber / 10000000000000 == 37)
            {
                printf("AMEX\n");
            }
            else if (creditCardNumber / 100000000000000 >= 51 && creditCardNumber / 100000000000000 < 56)
            {
                printf("MASTERCARD\n");
            }
            else 
            {
                printf("INVALID\n");
            }
        }
    }
    
}



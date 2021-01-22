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
    
    if (creditCardNumber < 1000000000000 || creditCardNumber > 9999999999999999) 
    {
        printf("INVALID\n");
    }
    else 
    {
        // Get every other digit starting from 2nd to last to multiply; then add digits
        long multiplied = creditCardNumber / 10;
        int sumOfMultiplied = 0;
        
        while (multiplied > 0)
        {
            // get 1s and 10s digits for products larger than 9
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
        
        // Get digits that are not multiplied
        long notMultiplied = creditCardNumber;
        int sumOfNotMultiplied = 0;
        
        while (notMultiplied > 0)
        {
            sumOfNotMultiplied = sumOfNotMultiplied + notMultiplied % 10;
            notMultiplied = notMultiplied / 100;
        }
       
        int totalSumOfDigits = sumOfNotMultiplied + sumOfMultiplied;
    
        // Checks card validity and sorts by card type
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



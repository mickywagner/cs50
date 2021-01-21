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
    
    if (creditCardNumber < 13 || creditCardNumber > 16) 
    {
        printf("INVALID\n");
    }
    else
    {
        printf("Check number validity\n");
    }
    
    
    // PRINT IF VALID AND WHAT TYPE OF CARD
    
    // multiply every other digit by 2 starting with the 2nd to last number
    // then add the products together for sumOfMultiplied
    
    // Add sumOfMultiplied to sum of digits starting from end that weren't multiplied
    
    // Total of sums % 10 == 0 is valid
}
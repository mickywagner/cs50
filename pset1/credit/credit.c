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
    
    
    // GETS digits not multiplied by 2
    long notMultiplied = creditCardNumber;
    int sum = 0;
    
    while (notMultiplied > 0)
    {
        printf("%lo", notMultiplied % 10);
        sum = sum + notMultiplied % 10;
        notMultiplied = notMultiplied / 100;
    }
    printf("\n");
    printf("%i\n", sum);
    
    // 1 0 0 0 0 6 0 4  -- ones to multiply
    // 4 0 0 0 0 0 3 0 -- ones to add
    
  
    
    
    // PRINT IF VALID AND WHAT TYPE OF CARD
    
    // multiply every other digit by 2 starting with the 2nd to last number
    // then add the products together for sumOfMultiplied
    
    // Add sumOfMultiplied to sum of digits starting from end that weren't multiplied
    
    // Total of sums % 10 == 0 is valid
    

    // (length = 15 && starts with 34 || 37) printf("AMERICAN EXPRESS\n")
    // (length = 16 && starts with 51, 52, 53, 54, 55) printf("MASTERCARD\n")
    // (length = 13 || 16 starts with 4) printf("VISA\N")
    
}
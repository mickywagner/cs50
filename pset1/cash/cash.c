#include <cs50.h>
#include <stdio.h>
#include <math.h>

int main(void)
{
    float changeOwed;
    do 
    {
        changeOwed = get_float("Change owed: "); 
    }
    while (changeOwed < 0);
    
    int changeOwedInCents = round(changeOwed * 100);
    
    int quarter = 25;
    int dime = 10;
    int nickel = 5;
    int penny = 1;
   
    int quarters = floor(changeOwedInCents / quarter);
    int dimes = floor((changeOwedInCents - (quarters * quarter)) / dime);
    int nickels = floor((changeOwedInCents - (quarters * quarter + dimes * dime)) / nickel);
    int pennies = floor((changeOwedInCents - (quarters * quarter + dimes * dime + nickels * nickel) / penny));
    
    int numberOfCoins = quarters + dimes + nickels + pennies;
    
    printf("%i\n", numberOfCoins);
}
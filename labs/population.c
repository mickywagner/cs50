#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int startPopulation;
    do 
    {
        startPopulation = get_int("Start size: ");
    }
    while (startPopulation < 9);
    
    int endPopulation;
    do
    {
        endPopulation = get_int("End size: ");
    }
    while (endPopulation < startPopulation);

    // TODO: Calculate number of years until we reach threshold
    int years = 0;
    int currentPopulation = startPopulation;
    int births = 3;
    int deaths = 4;

    while(currentPopulation < endPopulation)
    {
       currentPopulation = currentPopulation + (currentPopulation / births) - (currentPopulation / deaths);
       years++;
    }

    // TODO: Print number of years
    printf("%i\n", years);
}
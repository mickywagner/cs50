#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // TODO: Prompt for start size
    int initialPopulation = get_int("Start size: ");
    // TODO: Prompt for end size
    int endPopulation = get_int("End size: ");

    // TODO: Calculate number of years until we reach threshold
    int years = 0;
    int currentPopulation = initialPopulation;
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
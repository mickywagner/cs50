#include <cs50.h>
#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main(void)
{
    string text = get_string("Text: ");
    
    // TODO: Count letters, words, and sentences in text
    int words = 1;
    int letters = 0;
    for(int i = 0, n = strlen(text); i < n; i++)
    {
        if (isspace(text[i])) words++;
        if (isalpha(text[i])) letters++;
    }
    printf("%i letter(s)\n", letters);
    printf("%i word(s)\n", words);
    // TODO: Use Coleman-Liau formala to estimate grade level to nearest int
    
    // index = 0.0588 * L - 0.296 * S - 15.8;
    // L = average number of letters per 100 words
    // s = average number of sentences per 100 words
    
    // if (gradeLevel < 1)
    // {
    //     printf("Before Grade 1\n");
    // } else if (gradeLevel > 16)
    // {
    //     printf("Grade 16+\n");
    // }
    // else
    // {
    //     printf("Grade %i\n", gradeLevel);
    // }
}
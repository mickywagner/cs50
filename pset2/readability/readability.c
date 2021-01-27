#include <cs50.h>
#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <math.h>

int main(void)
{
    string text;
    do
    {
        text = get_string("Text: ");
    } 
    while (strlen(text) < 1);
    
    // Count letters, words, and sentences in text
    int words = 1;
    int letters = 0;
    int sentences = 0;
    
    for (int i = 0, n = strlen(text); i < n; i++)
    {
        if (isspace(text[i]))
        {
            words++;
        }
        if (isalpha(text[i])) 
        {
            letters++;
        }
        if (text[i] == '.' | text[i] == '!' | text[i] == '?') 
        {
            sentences++;
        }
    }
    
    // Use Coleman-Liau formala to estimate grade level to nearest int
    
    // Letters and Sentences per 100 words
    float L = letters / (float) words * 100;
    float S = sentences / (float) words * 100;
    
    float index = 0.0588 * L - 0.296 * S - 15.8;    
    int gradeLevel = round(index);
    
    if (gradeLevel < 1)
    {
        printf("Before Grade 1\n");
    } 
    else if (gradeLevel > 16)
    {
        printf("Grade 16+\n");
    }
    else
    {
        printf("Grade %i\n", gradeLevel);
    }
}
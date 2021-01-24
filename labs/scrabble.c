#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

// Points assigned to each letter of the alphabet
int POINTS[] = {1, 3, 3, 2, 1, 4, 2, 4, 1, 8, 5, 1, 3, 1, 1, 3, 10, 1, 1, 1, 1, 4, 4, 8, 4, 10};

int compute_score(string word);

int main(void)
{
    // Get input words from both players
    string word1 = get_string("Player 1: ");
    string word2 = get_string("Player 2: ");

    // Score both words
    int score1 = compute_score(word1);
    int score2 = compute_score(word2);
    
    printf("%i\n", score1);
    printf("%i\n", score2);

    // Print the winner
    if (score1 > score2)
    {
        printf("Player 1 wins!");
    }
    else if (score1 < score2) 
    {
        printf("Player 2 wins!");
    }
    else 
    {
        printf("Tie!");
    }
}

int compute_score(string word)
{
    int score;
    
    for (int i = 0, n = strlen(word); i < n; i++ ) 
    {
        if (islower(word[i])) 
        {
            printf("%i \n", word[i] - 97);
            // subtract 97 to get POINTS index to add to score
        }
        else
        {
            printf("%i \n", word[i] - 65);
            // subtract 65 to get POINTS index to add to score
        }
      
    }
    
    return 1;
}

// A - Z 65 - 90
// a - z 97 - 122
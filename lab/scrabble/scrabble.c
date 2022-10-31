#include <ctype.h>
#include <cs50.h>
#include <stdio.h>
#include <string.h>

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

    // TODO: Print the winner
    if (score1 > score2 && score2 < score1)
        printf("Player 1 wins!\n");
    else if (score2 > score1 && score1 < score2)
        printf("Player 2 wins!\n");
    else
        printf("Tie!\n");
}

int compute_score(string word)
{
    int count = 0;
    char c;
    int score = 0;
    char lower[100];

    for (int a = 0; a < strlen(word); a++)
    {
        lower[a] = tolower(word[a]);
    }

    printf("%i\n", count);

    for (int i = 0; i < (strlen(lower) + 1); i++)
    {
        for (c = 'a'; c <= lower[i]; c++, count++)
        {
            
            if (c == lower[i])
            {
                score += POINTS[count];
                printf("%c %d %i %i\n", c, count, i, score);
                count = 0;
                break;
            }
            else
                score += 0;
        }
    }
    printf("%i\n", count);
    return score;
}

// Psuedocode

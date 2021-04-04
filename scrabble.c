#include <ctype.h>
#include <cs50.h>
#include <stdio.h>
#include <string.h>
// Points assigned
int POINTS[] = {1, 3, 2, 1, 4, 2, 4, 8, 5, 1, 3, 1, 3, 10, 1, 1, 1, 1, 4, 4, 8, 4, 10};

int compute_score(string word);
int main(void)
{
    // Get input words from both players
    string word1 = get_string("Player 1: ");
    string word2 = get_string("Player 2: ");

    // Score both words
    int score1 = compute_score(word1);
    int score2 = compute_score(word2);
    // TODO: Print
}
int compute_score(string word)
{
    // TODO: return score for string
}

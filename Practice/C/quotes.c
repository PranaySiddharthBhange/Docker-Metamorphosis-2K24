#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int generateRandomNumber(int min, int max) {
    return rand() % (max - min + 1) + min;
}

void displayRandomQuote(const char *quotes[], int numberOfQuotes) {
    int randomIndex = generateRandomNumber(0, numberOfQuotes - 1);
    printf("┌───────────────────────────────────────────────────────────────────────────────────────────────────────────────────┐\n\n");
    printf("    \"%s\"\n\n", quotes[randomIndex]);
    printf("└───────────────────────────────────────────────────────────────────────────────────────────────────────────────────┘\n\n");










}

int main() {
    srand(time(NULL));

const char *quotes[] = {
    "Life is what happens when you're busy making other plans. - John Lennon",
    "The best way to predict the future is to create it. - Peter Drucker",
    "Life is either a daring adventure or nothing at all. - Helen Keller",
    "The purpose of our lives is to be happy. - Dalai Lama",
    "Your time is limited, don't waste it living someone else's life. - Steve Jobs",
    "The only impossible journey is the one you never begin. - Tony Robbins"
    "To live is the rarest thing in the world. Most people exist, that is all. - Oscar Wilde",

};

    int numberOfQuotes = sizeof(quotes) / sizeof(quotes[0]);

   displayRandomQuote(quotes, numberOfQuotes);

    return 0;
}

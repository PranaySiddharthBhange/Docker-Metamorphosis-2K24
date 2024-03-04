#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Function to generate a random number between min and max (inclusive)
int generateRandomNumber(int min, int max) {
    return rand() % (max - min + 1) + min;
}

// Function to display a random quote from the provided array
void displayRandomQuote(const char *quotes[], int numberOfQuotes) {
    // Generate a random index within the array bounds
    int randomIndex = generateRandomNumber(0, numberOfQuotes - 1);

    // Display the formatted quote with decorative borders
    printf("\n");
    printf("┌───────────────────────────────────────────────────────────────────────────────────────────────────────────────────┐\n\n");
    printf("    \"%s\"\n\n", quotes[randomIndex]);
    printf("└───────────────────────────────────────────────────────────────────────────────────────────────────────────────────┘\n\n");
}

int main() {
    // Seed the random number generator with the current time
    srand(time(NULL));

    // Array of quotes
    const char *quotes[] = {
        "Life is what happens when you're busy making other plans. - John Lennon",
        "The best way to predict the future is to create it. - Peter Drucker",
        "The purpose of our lives is to be happy. - Dalai Lama",
        "Your time is limited, don't waste it living someone else's life. - Steve Jobs",
        "The only impossible journey is the one you never begin. - Tony Robbins",
        "To live is the rarest thing in the world. Most people exist, that is all. - Oscar Wilde",
    };

    // Calculate the number of quotes in the array
    int numberOfQuotes = sizeof(quotes) / sizeof(quotes[0]);

    // Display a random quote
    displayRandomQuote(quotes, numberOfQuotes);

    return 0;
}

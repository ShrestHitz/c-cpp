#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    // Initialize random seed
    srand(time(0));

    // Generate random number between 1 and 100
    int randomNumber = (rand() % 100) + 1;

    // Print the random number
    printf("Random Number between 1 and 100: %d\n", randomNumber);

    return 0;
}

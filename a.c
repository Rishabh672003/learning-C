#include <stdio.h>
#include <stdlib.h>

int main() {
    char cards_name[3];
    puts("Enter the cards_name: ");
    scanf("%2s", cards_name);
    int val = 0;
    if (cards_name[0] == 'K') {
        val = 10;
    } else if (cards_name[0] == 'Q') {
        val = 10;
    } else if (cards_name[0] == 'K') {
        val = 10;
    } else if (cards_name[0] == 'J') {
        val = 10;
    } else if (cards_name[0] == 'A') {
        val = 11;
    } else {
        val = atoi(cards_name);
    }
    printf("The card value is: %i\n", val);
    return 0;
}

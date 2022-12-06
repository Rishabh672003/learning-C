#include <stdio.h>

int main() {
    char card_name[3];
    int count = 0;
    while (card_name[0] != 'X') {
        puts("Enter the card_name: ");
        scanf("%2s", card_name);
        int val = 0;

        switch (card_name[0]) {
        case 'K':
        case 'J':
        case 'Q':
            val = 10;
            break;
        case 'A':
            val = 11;
            break;
        case 'X':
            break;
        default:
            val = atoi(card_name);
            if ((val < 1) || (val > 10)) {
                puts("I dont understand that value");
                continue;
            }

            if ((val >= 3) && (val <= 6)) {
                count++;
            } else if (val == 10) {
                count--;
            }
            printf("Current count: %i\n", count);
        }
    }
    return 0;
}

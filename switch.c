#include <stdio.h>

int main() {
    char card_name[0];
    int val = 0;
    scanf("%c", card_name);
    switch (card_name[0]) {
    case 'K':
    case 'J':
    case 'Q':
        val = 10;
        break;
    case 'A':
        val = 11;
        break;
    default:
        val = atoi(card_name);
    }

    /* Check if the value is 3 to 6 */
    if ((val >= 3) && (val <= 6)) {
        puts("Count has gone up");
    } else if (val == 10) {
        puts("Count has gone down");
    }
    return 0;
}

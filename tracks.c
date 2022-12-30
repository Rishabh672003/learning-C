#include <stdio.h>
#include <string.h>

char tracks[][80] = {
    "i feel it coming",
    "starboy",
    "i would die for you",
    "woman",
};

void find_track(char search_for[]) {
    int i;
    for (i = 0; i < 5; i++) {
        if (strstr(tracks[i], search_for)) {
            printf("Tracks %i: '%s'\n", i, tracks[i]);
        }
    }
}

int main() {
    char search_for[80];
    printf("Search for: ");
    scanf("%79s", search_for);
    find_track(search_for);
    return 0;
}


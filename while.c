#include <stdio.h>

int main() {
  int x = 0;
  int y = 0;
  while (x < 5) {
    y = x - y;
    printf("%i%i", x, y);
    x = x + 1;
  }
}

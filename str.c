#include "stdio.h"

int main(){
    char username[50];
    // this doesnt takes whitespaces for a input normally
    // scanf("%49s", username);
    // for it to whitespaces use [^\n]
    // what it means is it will read all the input until a newline
    scanf("%49[^\n]", username);
    printf("%s", username);
}

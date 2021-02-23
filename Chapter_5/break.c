#include <stdio.h>
int main(void) {
    char c;
    for(;;) {
        puts("Press any key, Q to quit: ");
        c = toupper(getchar());
        if (c == 'Q') break;
    }
}   // Loop exits only when the uppercase or lowercase 'Q' is pressed
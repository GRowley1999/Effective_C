#include <stdio.h>
#include <stdlib.h>

void get_y_or_n(void) {
    char response[8];
    puts("Continue? [y] n: ");
    int c;
    char *p = response;
    while ((c = getchar()) != EOF && c != '\n') {
        *p++ = c;
    }
    *p = '\o';
    if (response[0] == 'n') {
        exit(0);
    }
}
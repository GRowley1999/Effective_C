#include <stdlib.h>
#include <stdio.h>

void f(unsigned int x) {
    while (x > 0) {
        printf("%d\n", x);
        --x;
    }
}

void main(void) {
    unsigned int x = 5;
    f(x);
}
#include <stdio.h>
#include <stdlib.h>

int main(void) {
    FILE my_stdout = *stdout;
    if (fputs("Hello, World!\n", &my_stdout) == EOF) {
        return EXIT_FAILURE;
    }
    return EXIT_SUCCESS;
}
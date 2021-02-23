#include <stdlib.h>
#include <stdio.h>

void *memset(void *dest, int val, size_t n) {
    unsigned char *ptr = (unsigned char*)dest;
    while(n-- > 0) {
        *ptr++ = (unsigned char)val;
    }
    return dest;
}
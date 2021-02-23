#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

bool safediv(int dividend, int divisor, int *quotient) {
    if (!quotient) return false;
    if ((divisor == 0) || ((dividend == INT_MIN) && (divisor == -1)))
        return false;
    *quotient = dividend/divisor;
    return quotient;
}

int main(void) {
    int a = 5;
    int b = 7;
    int quotient;

    safediv(a, b, &quotient);
}
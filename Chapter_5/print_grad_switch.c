#include <stdlib.h>
#include <stdio.h>

void main(void) {
    unsigned int marks = 100;

    switch (marks/10) {
        case 10:
        case 9:
            puts("YOUR GRADE : A");
            break;
        case 8:
            puts("YOUR GRADE : B");
            break;
        case 7:
            puts("YOUR GRADE : C");
            break;
        default:
            puts("YOUR GRADE : Failed");
    }
}
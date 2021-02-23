#include <stdlib.h>
#include <stdio.h>

void printgrade(unsigned int marks) {
    if (marks >= 90) {
        puts("YOUR GRADE : A");
    } else if (marks >= 80) {
        puts("YOUR GRADE : B");
    } else if (marks >= 70) {
        puts("YOUR GRADE : C");
    } else {
        puts("YOUR GRADE : Failed");
    }
}

void main(void) {
    unsigned int marks = 98;

    printgrade(marks);
}
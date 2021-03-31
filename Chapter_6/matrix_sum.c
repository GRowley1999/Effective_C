#include <stdio.h>
#include <stdlib.h>

int matrix_sum(size_t rows, size_t cols, int m[rows][cols]) {
    int total = 0;

    for (size_t r = 0; r < rows; r++) {
        for (size_t c = 0; c < cols; c++) {
            total += m[r][c];
        }
    }
    return total;
}

int main(void) {
    int m1[5][4];
    int m2[100][4];
    int m3[2][4];
    printf("%d.\n", matrix_sum(5, 4, m1));
    printf("%d.\n", matrix_sum(100, 4, m2));
    printf("%d.\n", matrix_sum(2, 4, m3));
}
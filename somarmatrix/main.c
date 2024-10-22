#include <stdio.h>

void somarraix(int matrix1[2][2], int matrix2[2][2]) {

    int matrixfinalsoma[2][2];
    int i,j;

    for (i = 0; i < 2; ++i) {

        for (j = 0; j < 2; ++j) {

            matrixfinalsoma[i][j] = matrix1[i][j] + matrix2[i][j];

        }

    }

    for (i = 0; i < 2; ++i) {

        for (j = 0; j < 2; ++j) {

            printf("\n%d", matrixfinalsoma[i][j]);

        }

    }

}


int main(void) {

    int matrix1[2][2] = {{4,2},{2,2}};
    int matrix2[2][2] = {{2,2},{2,4}};

    somarraix(matrix1,matrix2);

    return 0;
}

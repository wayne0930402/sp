#include <stdio.h>

// 轉置
void transpose(double *matrix, int rows, int cols) {
    double temp;
    for (int i = 0; i < rows; i++) {
        for (int j = i+1; j < cols; j++) {
            temp = *((matrix+i*cols) + j);
            *((matrix+i*cols) + j) = *((matrix+j*cols) + i);
            *((matrix+j*cols) + i) = temp;
        }
    }
}

// 相加
void add(double *matrix1, double *matrix2, double *result, int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            *((result+i*cols) + j) = *((matrix1+i*cols) + j) + *((matrix2+i*cols) + j);
        }
    }
}

// 相乘
void multiply(double *matrix1, double *matrix2, double *result, int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            *((result+i*cols) + j) = 0;
            for (int k = 0; k < cols; k++) {
                *((result+i*cols) + j) += *((matrix1+i*cols) + k) * *((matrix2+k*cols) + j);
            }
        }
    }
}

// 印出
void dump(double *matrix, int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%f ", *((matrix+i*cols) + j));
        }
        printf("\n");
    }
}

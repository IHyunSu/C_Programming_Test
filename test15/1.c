#include <stdio.h>
#include <stdlib.h>

double **inputArr(int rows, int cols);
double *avgArray(double **arr, int rows, int cols);


int main () {
    FILE* file;
    if ((file = fopen("f1.txt", "r")) == NULL) {
        fprintf(stderr, "Cannot open file\n");
        exit(1);
    }

    int rows = 0, cols = 0;
    double **arr;
    double *sumArr;
    fscanf(file, "%d %d", &rows, &cols);
    fclose(file);

    arr = inputArr(rows, cols);

    sumArr = avgArray(arr, rows, cols);

    for (int i = 0; i < cols; i++) {
        printf("%d: %.2f\n", i, sumArr[i]);
    }

    for (int i = 0; i < rows; i++) {
        free(arr[i]);
    }
    free(arr);

    free(sumArr);

    return 0;
}

double **inputArr(int rows, int cols) {
    double **temp;
    temp = (double**)malloc(sizeof(double*) * rows);
    for (int i = 0; i < rows; i++) {
        temp[i] = (double*)malloc(sizeof(double) * cols);
    }

    FILE* file;
    if ((file = fopen("f1.txt", "r")) == NULL) {
        fprintf(stderr, "Cannot open file\n");
        exit(1);
    }
    fscanf(file, "%*d %*d");

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            fscanf(file, "%lf", &temp[i][j]);
        }
    }
    fclose(file);

    return temp;
}

double *avgArray(double **arr, int rows, int cols) {
    double *sumArr;
    double sum = 0, avg = 0;
    sumArr = (double*)malloc(sizeof(double) * rows);
    for (int i = 0; i < cols; i++) {
        sum = 0;
        for (int j = 0; j < rows; j++) {
            sum += arr[j][i];
        }
        avg = sum / rows;
        sumArr[i] = avg;
    }
    return sumArr;
}
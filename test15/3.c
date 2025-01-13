#include <stdio.h>
#include <stdlib.h>

void inputArray(double **arr, int capacity, int *i);
double sumArray(double *arr, int size);
double averageArray(double *arr, int size);

int main () {
    double *arr;
    int capacity = 5;
    int i = 0;
    inputArray(&arr, capacity, &i);

    double sum = sumArray(arr, i);
    double avg = averageArray(arr, i);

    printf("합 = %.2f\n", sum);
    printf("평균 = %.2f\n", avg);

    return 0;
}

void inputArray(double **arr, int capacity, int *i) {
    double num, *temp;
    FILE* file;
    if ((file = fopen("f4.txt", "r")) == NULL) {
        fprintf(stderr, "Cannot open file\n");
        exit(1);
    }
    *arr = (double*)malloc(sizeof(double) * capacity);

    while ((fscanf(file, "%lf", &num)) == 1) {
        if ((*i) == capacity - 1) {
            capacity *= 2;
            temp = realloc(*arr, sizeof(double) * capacity);
            if (temp == NULL) {
                printf("Memory Allocation Error\n");
                free(arr);
                exit(1);
            }
            *arr = temp;
            (*arr)[(*i)++] = num;
        } else {
            (*arr)[(*i)++] = num;
        }
    }

    fclose(file);
}

double sumArray(double *arr, int size) {
    double sum = 0;
    for (int i = 0; i < size; i++) {
        sum += arr[i];
    }
    return sum;
}

double averageArray(double *arr, int size) {
    double sum = 0;
    for (int i = 0; i < size; i++) {
        sum += arr[i];
    }
    double avg = sum / size;
    return avg;
}
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int* squareArray(int* arr, int size);
void printArray(int* arr, int size);

int main () {
    int n;
    FILE* file;
    if ((file = fopen("f4.txt", "r")) == NULL) {
        fprintf(stderr, "Cannot open file\n");
        exit(1);
    }
    int *arr;
    int *arr2;

    fscanf(file, "%d", &n);
    arr = (int*)malloc(sizeof(int) * n);
    arr2 = (int*)malloc(sizeof(int) * n);

    for (int i = 0; i < n; i++) {
        fscanf(file, "%d", &arr[i]);
    }
    fclose(file);

    arr2 = squareArray(arr, n);
    
    printf("ary1 : ");
    printArray(arr, n);
    printf("\nary2 : ");
    printArray(arr2, n);

    free(arr);
    free(arr2);

    return 0;
}

int* squareArray(int* arr, int size) {
    int *temp;
    temp = (int*)malloc(sizeof(int) * size);
    for (int i = 0; i < size; i++) {
        temp[i] = arr[i] * arr[i];
    }
    return temp;
}

void printArray(int* arr, int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
}
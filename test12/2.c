#include <stdio.h>
#include <stdlib.h>

int* buildArray(int *size);
int findMin(int *ary, int size);

int main () {
    int size, min = 0;
    int *arr;

    arr = buildArray(&size);

    min = findMin(arr, size);
    printf("%d\n", min);
}

int* buildArray(int *size) {
    int *tmp;
    int num;

    FILE* file = fopen("f2.txt", "r");
    if (file == NULL) {
        printf("Can not open file\n");
        exit(1);
    }

    fscanf(file, "%d", size);
    tmp = (int*)malloc(sizeof(int) * (*size));

    for (int i = 0; i < (*size); i++) {
        fscanf(file, "%d", &tmp[i]);
    }

    fclose(file);

    return tmp;
}

int findMin( int *ary, int size) {
    int min = ary[0];

    for (int i = 1; i < size; i++) {
        if (min > ary[i]) min = ary[i]; 
    }

    return min;
}
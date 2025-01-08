#include <stdio.h>
#include <stdlib.h>

int* buildArray(int *size);
int findMin(int *ary, int size);

int main () {
    int size, min = 0;
    int *arr;

    arr = buildArray(&size);
    if (arr == NULL) {
        return 1; // 메모리 할당 실패
    }

    min = findMin(arr, size);
    printf("\n");
    printf("%d\n", min);

    free(arr);
    return 0;
}

int* buildArray(int *size) {
    int *tmp;
    FILE* file = fopen("f2.txt", "r");
    if (file == NULL) {
        printf("Can not open file\n");
        return NULL;
    }

    fscanf(file, "%d", size);
    tmp = (int*) malloc (sizeof(int) * (*size));

    for (int i = 0; i < (*size); i++) {
        fscanf(file, "%d", &tmp[i]);
    }

    for (int i = 0; i < (*size); i++) {
        printf("%d ", tmp[i]);
    }

    fclose(file);
    return tmp;
}

int findMin(int *ary, int size) {
    int min = ary[0];

    for (int i = 1; i < size; i++) {
        if (min > ary[i]) min = ary[i]; 
    }

    return min;
}

#include <stdio.h>
#include <stdlib.h>
#define MAX_SIZE 101

int **init_array(int row, int col);
int sumAry1D(int ary[], int size, int *all_sum);

int main () {
    int r, c, num;
    int **ary;
    int result;
    int all_sum = 0;

    FILE *file;
    if ((file = fopen("f5.txt", "r")) == NULL) {
        printf("Can not open file\n");
        exit(1);
    }

    fscanf(file, "%d %d", &r, &c);

    ary = init_array(r, c);

    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            fscanf(file, "%d", &num);
            ary[i][j] = num;
        }
    }

    for (int i = 0; i < r; i++) {
        result = sumAry1D(ary[i], c, &all_sum);
        printf("%d\n", result);
    }

    printf("%d\n", all_sum);
    return 0;
}

int **init_array(int row, int col) {
    int **tmp;

    tmp = (int**)malloc(sizeof(int*) * row);
    for (int i = 0; i < row; i++) {
        tmp[i] = (int*)malloc(sizeof(int) * col);
    }
    return tmp;
}

int sumAry1D(int ary[], int size, int *all_sum) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += ary[i];
        (*all_sum) += ary[i];
    }

    return sum;
}

#include <stdio.h>
#include <stdlib.h>

#define MAX_ROW 101
#define MAX_COL 101

void print1DArray(int *d[], int n);

int main () {
    int num;
    int i = 0, j = 0;
    int arr[MAX_ROW][MAX_COL];

    FILE *file = fopen("f4.txt", "r");
    if (file == NULL) {
        printf("Can not open file\n");
        exit(1);
    }

    for (i = 0; i < 4; i++) {
        for (j = 0; j < 5; j++) {
            fscanf(file, "%d", &num);
            arr[i][j] = num;
        }
    }

    int k = 0, s = 0;

    int *p[4] = {&arr[1][0], &arr[3][0], &arr[0][0], &arr[2][0]};

    print1DArray(p, 4);
}

void print1DArray(int *d[], int n) {
    int j;
    for (int i = 0; i < 4; i++) {
        j = 0;
        while (d[i][j] != '\0') {
            printf("%d ", d[i][j]);
            j++;
        }
        printf("\n");
    }
}
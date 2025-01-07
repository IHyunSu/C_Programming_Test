#include <stdio.h>
#include <stdlib.h>

void minMax(int data[], int n, int *min, int *max);

int main () {
    int n, tmp;
    int data[11];
    int min = 0, max = 0;

    FILE *file = fopen("f4.txt", "r");
    if (file == NULL) {
        printf("can not open file\n");
        exit(1);
    }

    fscanf(file, "%d", &n);

    for (int i = 0; i < n; i++) {
        fscanf(file, "%d", &tmp);
        data[i] = tmp;
    }

    min = data[0], max = data[0];
    fclose(file);

    minMax(data, n, &min, &max);

    printf("%d %d", max, min);

    return 0;
}

void minMax(int data[], int n, int *min, int *max) {
    for (int i = 0; i < n; i++) {
        if (data[i] < (*min)) *min = data[i];
        if (data[i] > (*max)) *max = data[i]; 
    }

    return;
}
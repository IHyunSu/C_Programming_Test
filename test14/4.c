#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_LEN 101
#define MAX_SIZE 11

typedef struct Food {
    char fname[MAX_LEN];
    int calories;
} Food;

void inputFoods(Food *ary, int *size);
int totalCalories(Food ary[], int size);

int main () {
    int size = 0;
    Food *ary;
    ary = (Food*)malloc(sizeof(Food) * MAX_SIZE);

    inputFoods(ary, &size);
    int total = totalCalories(ary, size);

    printf("%d\n", total);

    free(ary);
}

void inputFoods(Food *ary, int *size) {
    FILE *file;
    if ((file = fopen("f4.txt", "r")) == NULL) {
        fprintf(stderr, "Cannot open file\n");
        exit(1);
    }

    while ((fscanf(file, "%s %d", ary[*size].fname, &ary[*size].calories)) == 2) {
        (*size)++;
    }
}

int totalCalories(Food ary[], int size) {
    int calSum = 0;
    for (int i = 0; i < size; i++) {
        calSum += ary[i].calories;
    }

    return calSum;
}
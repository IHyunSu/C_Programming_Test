#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define SWAP(temp, a, b) { \
    temp = a; \
    a = b; \
    b = temp; \
}

typedef struct {
    char fname[100];
    int calories;
} Food;

int compare(const void* a, const void* b);
void printFood(Food *f, int size);
void sortCalories(Food *f, int size);

int main () {
    int i = 0, capacity = 2, num;
    char name[10];

    Food *f, *tmp;
    f = (Food*)malloc(sizeof(Food) * capacity);

    FILE* file;
    if ((file = fopen("f5.txt", "r")) == NULL) {
        fprintf(stderr, "Cannot open file\n");
        exit(1);
    }

    while ((fscanf(file, "%s %d", name, &num)) == 2) {
        if (i == capacity - 1) {
            capacity *= 2;
            tmp = realloc(f, sizeof(Food) * capacity);
            if (tmp == NULL) {
                printf("Memory Allocation Error\n");
                exit(1);
            }
            f = tmp;
            strcpy(f[i].fname, name);
            f[i++].calories = num;
        } else {
            strcpy(f[i].fname, name);
            f[i++].calories = num;
        }
    }

    qsort(f, i, sizeof(Food), compare);
    printf("Sorting by fname :\n");
    printFood(f, i);

    sortCalories(f, i);
    printf("\nSorting by calories :\n");
    printFood(f, i);
}

int compare(const void* a, const void* b) {
    Food* A = (Food*)a;
    Food* B = (Food*)b;
    return strcmp(A->fname, B->fname);
}

void printFood(Food *f, int size) {
    for (int j = 0; j < size; j++) {
        printf("%s %d\n", f[j].fname, f[j].calories);
    }
}

void sortCalories(Food *f, int size) {
    int temp;
    char temp2[30];
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - 1 - i; j++) {
            if (f[j].calories > f[j+1].calories) {
                SWAP(temp, f[j].calories, f[j+1].calories);

                strcpy(temp2, f[j].fname);
                strcpy(f[j].fname, f[j+1].fname);
                strcpy(f[j+1].fname, temp2);
            }
        }
    }
}
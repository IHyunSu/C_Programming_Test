#include <stdio.h>
#include <stdlib.h>

double *init_array(int max_size);
void create_array(double source1[], double source2[], int max_size,  char file_name[]);
void add_array(double source1[], double source2[], double target[], int num);
void print_result(double target[]);
void free_array(double source1[], double source2[], double target[]);

int main () {
    double *source1, *source2;
    double *target;
    int max_size = 0;
    char file_name[10] = "f1.txt";

    FILE *file;
    file = fopen(file_name, "r");
    if (file == NULL) {
        printf("Can not open file\n");
        exit(1);
    }

    fscanf(file, "%d", &max_size);
    
    fclose(file);

    source1 = init_array(max_size);
    source2 = init_array(max_size);
    target = init_array(max_size);

    create_array(source1, source2, max_size, file_name);

    add_array(source1, source2, target, max_size);

    print_result(target);

    free_array(source1, source2, target);

    return 0;
}

double *init_array(int max_size) {
    double *temp;
    temp = (double*)malloc(sizeof(double) * max_size);
    if (temp == NULL) {
        printf("Insufficient Memory Error\n");
        exit(1);
    }
    return temp;
}

void create_array(double source1[], double source2[], int max_size, char file_name[]) {
    double num;
    int i = 0, j = 0;
    FILE *file;
    file = fopen(file_name, "r");
    if (file == NULL) {
        printf("Can not open file\n");
        exit(1);
    }

    fscanf(file, "%*d");

    for (int i = 0; i < max_size; i++) {
        fscanf(file, "%lf", &num);
        source1[i] = num;
    }

    for (int i = 0; i < max_size; i++) {
        fscanf(file, "%lf", &num);
        source2[i] = num;
    }

    fclose(file);

    return;
}

void add_array(double source1[], double source2[], double target[], int num) {
    int i = 0, j = 0, k = 0;
    double sum = 0;

    for (int i = 0; i < num; i++) {
        target[i] = source1[i] + source2[i];
    }
}

void print_result(double target[]) {
    int i = 0;
    while (target[i] != 0) {
        printf("%.2f ", target[i++]);
    }
}

void free_array(double source1[], double source2[], double target[]) {
    free(source1);
    free(source2);
    free(target);
}
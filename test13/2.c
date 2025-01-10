#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX_LEN 101

void input(char *p[], int n);
void output(char *p[], int n);
void free_string(char *p[], int n);

int main() {
    int n;

    FILE *file;
    file = fopen("f2.txt", "r");
    if (file == NULL) {
        fprintf(stderr, "Can not open file\n");
        exit(1);
    }

    fscanf(file, "%d", &n);
    char **p = (char**)malloc(sizeof(char*) * n);
    if (p == NULL) {
        fprintf(stderr, "Memory Allocation failed\n");
        exit(1);
    }

    fclose(file);

    input(p, n);
    output(p, n);
    free_string(p, n);

    return 0;
}

void input(char *p[], int n) {
    FILE* file = fopen("f2.txt", "r");
    if (file == NULL) {
        fprintf(stderr, "Cannot open file\n");
        exit(1);
    }

    char temp[MAX_LEN];

    fscanf(file, "%*d");

    for (int i = 0; i < n; i++) {
        if (fgets(temp, MAX_LEN, file) == NULL) break;

        size_t len = strlen(temp) + 1;
        p[i] = (char*)malloc(len);
        if (p[i] == NULL) {
            fprintf(stderr, "Memory allocation failed\n");
            exit(1);
        }
        strcpy(p[i], temp);
    }
    fclose(file);
}

void output(char *p[], int n) {
    for (int i = 0; i < n; i++) {
        if (p[i] != NULL) { // NULL 체크
            printf("%s", p[i]);
        }
    }
}

void free_string(char *p[], int n) {
    for (int i = 0; i < n; i++) {
        free(p[i]);
    }
    free(p);
}

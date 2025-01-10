#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_LEN 21
#define SWAP (temp, a, b) { \
    temp = a; \
    a = b; \
    b = temp; \
}

void sort(char strings[][MAX_LEN], int count);
void output(char strings[][MAX_LEN], int count);

int main () {
    char strings[MAX_LEN][MAX_LEN];
    char temp[MAX_LEN];
    int count;

    FILE *file = fopen("f2.txt", "r");
    if (file == NULL) {
        fprintf(stderr, "Cannot open file\n");
        exit(1);
    }

    fscanf(file, "%d", &count);

    for (int i = 0; i < count; i++) {
        fscanf(file, "%s", temp);
        strcpy(strings[i], temp);
    }

    sort(strings, count);
    output(strings, count);

    return 0;
}

void sort(char strings[][MAX_LEN], int count) {
    char temp[MAX_LEN];
    for (int i = 0; i < count - 1; i++) {
        for (int j = 1; j < count - i; j++) {
            if (strcmp(strings[j-1], strings[j]) > 0) {
                strcpy(temp, strings[j-1]);
                strcpy(strings[j-1], strings[j]);
                strcpy(strings[j], temp);
            }
        }
    }
}

void output(char strings[][MAX_LEN], int count) {
    for (int i = 0; i < count; i++) {
        printf("%s ", strings[i]);
    }
}
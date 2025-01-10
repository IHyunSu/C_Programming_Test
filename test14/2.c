#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_LEN 101

typedef struct MovieData {
    char mvName[MAX_LEN];
    char dirc[MAX_LEN];
    int year;
    int runT;
} MovieData;

void input(MovieData *m);
void print(MovieData *m);

int main () {
    MovieData *m;
    m = (MovieData*)malloc(sizeof(MovieData));

    input(m);
    print(m);

    free(m);

    return 0;
}

void input(MovieData *m) {
    fgets(m->mvName, 51, stdin);
    m->mvName[strlen(m->mvName) - 1] = '\0';

    fgets(m->dirc, 51, stdin);
    m->dirc[strlen(m->dirc) - 1] = '\0';
    
    scanf("%d %d", &m->year, &m->runT);

    return;
}

void print(MovieData *m) {
    printf("Title : %s\n", m->mvName);
    printf("Director : %s\n", m->dirc);
    printf("Year : %d\n", m->year);
    printf("RunningTime : %d\n", m->runT);

    return;
}
#include <stdio.h>
#include <string.h>

#define MAX_LEN 80

void input(char strings[][MAX_LEN], int count);
void output(char strings[][MAX_LEN], int count);

int main () {
    char strings[MAX_LEN][MAX_LEN];
    int count = 3;

    input(strings, count);
    output(strings, count);

    return 0;
}

void input(char strings[][MAX_LEN], int count) {
    int i = 0;
    char temp[MAX_LEN];
    while (i < count && fgets(temp, MAX_LEN, stdin) != NULL) {
        strcpy(&strings[i][0], temp);
        i++;
    }
    return;
}

void output(char strings[][MAX_LEN], int count) {
    for (int i = 0; i < count; i++) {
        int j = 0;
        while (strings[i][j] != '\0') {
            printf("%c", strings[i][j++]);
        }
    }
}
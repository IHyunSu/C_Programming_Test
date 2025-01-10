#include <stdio.h>
#include <string.h>
#define MAX_LEN 81

void reverse(char p[]);

int main () {
    char p[MAX_LEN];

    while (1) {
        printf("문자열 입력(종료 q) : ");
        fgets(p, MAX_LEN, stdin);
        if (strcmp(p, "q\n") == 0) {
            break;
        } else {
            reverse(p);
            printf("%s\n", p);
        }
    }
}

void reverse(char p[]) {
    for (int i = 0, j = (int)strlen(p) - 2; i < j; i++, j--) {
        char c = p[i];
        p[i] = p[j];
        p[j] = c;
    }
}
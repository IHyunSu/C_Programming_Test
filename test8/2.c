#include <stdio.h>

void printStar(int n);

int main () {
    int n;
    scanf("%d", &n);

    printStar(n);

    return 0;
}

void printStar(int n) {
    for (int i = 1; i <= n; i++) {
        for (int j = i; j <= n - 1; j++)
            printf(" ");

        for (int j = 1; j < (i * 2); j++)
            printf("*");
        
        printf("\n");
    }

    return;
}
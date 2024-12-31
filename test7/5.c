#include <stdio.h>
#include <limits.h>

#define MAX_SIZE 100

int main () {
    int list[MAX_SIZE], i = 0;

    int n, max = 0, min = INT_MAX;

    while (1) {
        scanf("%d", &n);
        if (n != 0) {
            list[i++] = n;
            if (list[i-1] <= min) min = list[i-1];
            if (list[i-1] >= max) max = list[i-1];
        }
        else {
            break;
        }
    }

    printf("%d %d", max, min);
}
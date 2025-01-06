// 2024004501 이현수

#include <stdio.h>

int main () {
    int N, start, end;

    scanf("%d %d %d", &N, &start, &end);

    for (int i = start; i <= end; i++) {
        printf("%d", i*N);
        if (i < end) printf(" ");
    }

    return 0;
}
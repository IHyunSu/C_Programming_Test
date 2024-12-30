// 프로그래밍기초 실습 #05
// 2024004501 이현수

#include <stdio.h>

int main () {
    int n;
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            if (j <= i)
                printf("%d", j);
            else
                printf("*");
        }
        printf("\n");
    }

    return 0;
}
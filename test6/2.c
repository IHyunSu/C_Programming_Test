//프로그래밍 기초 실습 #06
//2024004501 이현수

#include <stdio.h>

int main () {
    int n, count = 1, sum = 0;

    while (1) {
        scanf("%d", &n);

        if (n < 0) {
            printf("wrong\n");
        } else {
            for (int i = 0; i < n; i++) {
                printf("%d\n", count);
                sum += count;
                count *= 2;
            }
            printf("=%d\n", sum);
            break;
        }
    }
}
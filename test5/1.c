// 프로그래밍기초 실습 #05
// 2024004501 이현수

#include <stdio.h>

int main () {
    int n;
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        if ((i % 2 == 1) && (i % 3 != 0))
            printf("%d ", i);
    }

    return 0;
}
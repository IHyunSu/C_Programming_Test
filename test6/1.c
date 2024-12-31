//프로그래밍 기초 실습 #06
//2024004501 이현수

#include <stdio.h>

#define sentinal 0

int main () {
    int u, n = 0;
    double sum = 0.0, averge = 0.0;
    while (1) {
        scanf("%d", &u);
        if (u >= sentinal) {
            n++;
            sum += u;
        } else {
            break;
        }
    }

    averge = sum / n;

    printf("%.2f", averge);

    return 0;
}
//프로그래밍 기초 실습 #06
//2024004501

#include <stdio.h>

int main () {
    int a, b;
    char c;

    while(1) {
        scanf("%d%c%d", &a, &c, &b);
        if (c == '+') {
            printf("%d%c%d=%d\n", a, c, b, a + b);
        } else if (c == '-') {
            printf("%d%c%d=%d\n", a, c, b, a - b);
        } else if (c == '*') {
            printf("%d%c%d=%d\n", a, c, b, a * b);
        } else if (c == '/') {
            if (a == 0 || b == 0) {
                printf("Error\n");
            } else {
                printf("%d%c%d=%.2f\n", a, c, b, (double)a / b);
            }
        } else {
            break;
        }
    }

    return 0;
}
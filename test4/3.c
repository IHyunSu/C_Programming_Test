// 프로그래밍 기초 실습 #04 실근 중근 허근 문제
// 2024004501 이현수

#include <stdio.h>
#include <math.h>

int main () {
    int a, b, c, test;
    double result1, result2;
    scanf("%d %d %d", &a, &b, &c);

    if (a == 0) {
        double x;
        x = (double)-c / b;
        printf("%.6f\n", x);
    } else {
        test = (pow(b, 2)) - (4 * a * c);

        if (test > 0) {
            result1 = ((-b) + sqrt(test)) / (2*a);
            result2 = ((-b) - sqrt(test)) / (2*a);
            printf("%.6f, %.6f\n", result1, result2);
        } else if (test == 0) {
            result1 = (-b) / (2*a);
            printf("%.6f\n", result1);
        } else {
            printf("허근입니다\n");
        }

    }

    return 0;
}
#include <stdio.h>
#include <math.h>

int main () {
    double x = 11.3;

    double result;
    result = (3 * pow(x, 3)) - (7 * pow(x, 2)) + 9;

    printf("x의 값이 %.1f일 때, 다항식의 값은 %f 입니다.", x, result);

    return 0;
}
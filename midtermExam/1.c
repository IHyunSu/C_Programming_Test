// 2024004501 이현수

#include <stdio.h>
#include <stdlib.h>

int main () {
    double n;
    scanf("%lf", &n);

    int int_num = (int)n;
    double double_num = abs(n - int_num);

    printf("%d %.2f", int_num, double_num);

    return 0;
}
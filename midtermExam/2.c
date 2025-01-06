// 2024004501 이현수

#include <stdio.h>

int main () {
    int num;
    scanf("%d", &num);

    int result, sum = 0;

    while (num > 0) {
        sum += num % 10;
        num /= 10;
    }

    printf("%d", sum);

    return 0;
}
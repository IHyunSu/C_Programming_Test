// 프로그래밍기초 실습 #05
// 2024004501 이현수

#include <stdio.h>

int main () {
    int n;
    scanf("%d", &n);

    int sum = 0, tmp, max_value = 0;

    for (int i = 0; i < n; i++) {
        scanf("%d", &tmp);
        sum += tmp;
        if (max_value <= tmp)
            max_value = tmp;
    }

    printf("%d\n%d\n", sum, max_value);

    return 0;
}
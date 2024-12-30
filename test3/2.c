// 프로그래밍 기초 실습 #03 3-5 잔돈 문제
// 2024004501 이현수

#include <stdio.h>
#define MAX_SIZE 10

int main () {
    int x;
    scanf("%d", &x);

    int result = 0, i = 0;
    int temp[MAX_SIZE] = { 10000, 5000, 1000, 500, 100, 50, 10, 5, 1 };
    while (temp[i] != '\0') {
        result = x / temp[i];
        x %= temp[i];
        printf("%d:%d\n", temp[i], result);
        i++;
    }

    return 0;
}
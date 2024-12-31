//프로그래밍기초 실습 #07
//2024004501 이현수

#include <stdio.h>
#define MAX_SIZE 100

int main () {
    int n = 0, max_n, temp, list[MAX_SIZE], i = 0;

    while (1) {
        scanf("%d", &temp);
        if (temp != 0) {
            n++;
            list[i++] = temp;
        } else {
            break;
        }
    }

    printf("%d\n", n);
    for (int j = n-1; j >= 0; j--) {
        printf("%d", list[j]);
        if (j != 0) printf(" ");
    }
}
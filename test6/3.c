//프로그래밍 기초 실습 #06
//2024004501 이현수

#include <stdio.h>

int main () {
    int n = 1, count = 1;

    for (int i = 1; i <= 9; i++) {
        for (int j = 1; j <= 5; j++) {
            printf("%d*%d=%d", j, i, j*i);
            if (j != 5) printf("\t\t");
        }
        printf("\n");
    }
}
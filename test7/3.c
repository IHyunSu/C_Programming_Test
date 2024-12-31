//프로그래밍 기초 실습 #07
//2024004501

#include <stdio.h>
#define SIZE 5

int main () {
    int list1[SIZE+1], list2[SIZE+1];

    int n, s = 1;
    for (int i = 0; i < SIZE; i++) {
        scanf("%d", &n);
        list1[i] = n;
    }

    for (int i = 0; i < SIZE; i++) {
        scanf("%d", &n);
        list2[i] = n;
    }


    for (int i = 0; i < SIZE; i++) {
        if (list1[i] != list2[i]) {
            s = 0;
        }
    }

    if (s == 1) printf("same\n");
    else printf("not same\n");

    return 0;
}
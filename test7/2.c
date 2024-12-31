//프로그래밍기초 실습 #07
//2024004501 이현수

#include <stdio.h>

#define MAX_SIZE 100

int main () {
    double n, sum = 0.0, averge = 0.0, list1[MAX_SIZE], list2[MAX_SIZE];
    int target, count = 0, j = 0;

    while (1) {
        scanf("%lf", &n);
        if (n != 0.0) {
            sum += n;
            count++;
            list1[j++] = n;
        } else {
            break;
        }
    }

    averge = sum / count;

    printf("%.1f\n", averge);

    j = 0;

    for (int i = 0; i < count; i++) {
        if (list1[i] <= averge) {
            list2[j] = list1[i];
            j++;
        }
    }

    for (int i = 0; i < j; i++) {
        printf("%.1f", list2[i]);
        if (i != j-1) printf(" ");
    }
    

    return 0;
}
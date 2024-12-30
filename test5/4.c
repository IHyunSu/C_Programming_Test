// 프로그래밍기초 실습 #05
// 2024004501 이현수

#include <stdio.h>

#define MAX_SIZE 10

int main () {
    int x, sum = 0;
    int result, current, temp;

    int list1[MAX_SIZE] = {0};
    int i = 0, max_i = 0;

    double list2[MAX_SIZE] = {0.09, 0.18, 0.27, 0.36};
    int j = 0, max_j = 4;

    int list3[MAX_SIZE] = {1000, 3000, 4000, 8000};
    int k = 0, max_k = 4;

    scanf("%d", &x);
    int tmp_x = x;
    int u = 0;
    while (1) {
        current = tmp_x;
        tmp_x -= list3[k];
        if (tmp_x > 0) {
            if (tmp_x >= list3[k]) {
                list1[i++] = list3[k++];
            }
            else {
                for (int u = 0; u <= max_k; u++) {
                    temp = tmp_x - list3[u];
                    if (temp >= 0) {
                        list1[i++] = list3[k++];
                        break;
                    }
                }
            }
        }
        else {
            list1[i++] = current;
            break;
        }
    }
    max_i = i;
    i = 0;

    // printf("\n");
    // for (int l = 0; l < max_i; l++) {
    //     printf("%d ", list1[l]);
    // }
    // printf("\n");
    // for (int l = 0; l < max_j; l++) {
    //     printf("%.2f ", list2[l]);
    // }
    // printf("\n");
    // for (int l = 0; l < max_k; l++) {
    //     printf("%d ", list3[l]);
    // }
    // printf("\n");

    while (i < max_i) {
        result = list1[i] * list2[j];
        sum += result;
        printf("%d * %.2f = %d\n", list1[i], list2[j], result);
        i++, j++;
    }

    printf("= %d\n", sum);

    return 0;
}
// 2024004501 이현수

#include <stdio.h>
#define MAX_SIZE 100001

int glc(int a, int b);

int main () {
    int a, b;
    scanf("%d %d", &a, &b);

    int result = glc(a, b);

    printf("%d\n", result);
}

int glc(int a, int b) {
    int glc_result = 0;
    int k = 0, s = 0;
    int list1[MAX_SIZE], list2[MAX_SIZE];

    for (int i = 1; i <= MAX_SIZE; i++) {
        if (i % a == 0) {
            list1[k++] = i;
        }
    }

    for (int i = 1; i <= MAX_SIZE; i++) {
        if (i % b == 0) {
            list2[s++] = i;
        }
    }

    k = 0, s = 0;

    while (k < MAX_SIZE || s < MAX_SIZE) {
        if (list1[k] == list2[s]) {
            glc_result = list1[k];
            break;
        } else if (list1[k] < list2[s]) {
            k++;
        } else if (list1[k] > list2[s]) {
            s++;
        }
    }

    return glc_result;
}
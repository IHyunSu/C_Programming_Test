#include <stdio.h>
#define MAX_SiZE 10001

int GCD(int a, int b);

int main () {
    int a, b;

    while (1) {
        scanf("%d %d", &a, &b);
        if (a == 0 && b == 0) break;

        printf("%d\n", GCD(a,b));
    }

    return 0;
}

int GCD(int a, int b) {
    int list1[MAX_SiZE], list2[MAX_SiZE];
    int k = 0, s = 0;
    int max_value = 0;

    for (int i = 0; i < MAX_SiZE; i++) list1[i] = 0;
    for (int i = 0; i < MAX_SiZE; i++) list2[i] = 0;

    for (int i = 1; i <= a; i++)
        if (a % i == 0) 
            list1[k++] = i;

    for (int i = 1; i <= b; i++)
        if (b % i == 0) 
            list2[s++] = i;

    k--, s--;

    while (k >= 0 || s >= 0) {
        if (list1[k] == list2[s]) {
            max_value = list1[k];
            break;
        } else if (list1[k] > list2[s]) {
            k--;
        } else if (list1[k] < list2[s]) {
            s--;
        }
    }

    return max_value;
}
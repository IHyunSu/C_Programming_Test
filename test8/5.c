#include <stdio.h>
#define MAX_NUM 1000
#define MAX_SIZE 10000

int lcm(int x, int y);

int main () {
    int x, y;
    scanf("%d %d", &x, &y);

    int result = lcm(x, y);

    printf("%d\n", result);

    return 0;
}

int lcm(int x, int y) {
    int list1[MAX_SIZE], list2[MAX_SIZE];
    int u = 0, s = 0, max_u, max_s;
    int result = 0;

    for (int i = 1; i <= MAX_NUM; i++) {
        if (i % x == 0) {
            list1[u++] = i;
        }
        if (i % y == 0) {
            list2[s++] = i;
        }
    }
    max_u = u;
    max_s = s;
    u = 0, s = 0;

    while (u <= max_u || s <= max_s) {
        if (list1[u] == list2[s]) {
            result = list1[u];
            break;
        }
        else if (list1[u] < list2[s]) {
            u++;
        }
        else if (list1[u] > list2[s]) {
            s++;
        }
    }

    if (result) return result;
    else return x * y;
}

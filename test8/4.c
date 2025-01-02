#include <stdio.h>
#define MAX 10001

int list[MAX][MAX];
int u = 0;

int sumMultiple(int start, int end, int x, int y);

int main () {
    int start, end, n, m;
    scanf("%d %d %d %d", &start, &end, &n, &m);

    int max_i = sumMultiple(start, end, n, m);
    int j = 0;

    for (int i = 0; i <= max_i; i++) {
        printf("%d\n", list[i][j]);
    }

    return 0;
}

int sumMultiple(int start, int end, int x, int y) {
    int sum = 0, s = 0, max_u;
    
    //1
    for (int i = start; i < end; i++) {
        if (i % x == 0) {
            sum += i;
        }
    }
    list[u][s] = sum;

    //2
    u++; sum = 0;
    for (int i = start; i < end; i++) {
        if (i % y == 0) {
            sum += i;
        }
    }
    list[u][s] = sum;

    //3
    u++; sum = 0;
    for (int i = start; i < end; i++) {
        if ((i % x == 0) && (i % y == 0))  {
            sum += i;
        }
    }
    list[u][s] = sum;

    //4
    u++; sum = 0;
    for (int i = start; i < end; i++) {
        if ((i % x == 0) || (i % y == 0)) {
            sum += i;
        }
    }
    list[u][s] = sum;

    //5
    u++; sum = 0;
    for (int i = start; i < end; i++) {
        if ((i % y == 0) && (i % x != 0)) {
            sum += i;
        }
    }
    list[u][s] = sum;

    //6
    u++; sum = 0;
    for (int i = start; i < end; i++) {
        if ((i % x != 0) && (i % y != 0)) {
            sum += i;
        }
    }
    list[u][s] = sum;

    max_u = u;

    return max_u;
}
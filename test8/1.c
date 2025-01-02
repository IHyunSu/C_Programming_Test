#include <stdio.h>

#define MAX_SIZE 200

int gcd(int a, int b);

int main () {
    int a, b;

    scanf("%d %d", &a, &b);

    int result = gcd(a, b);

    printf("%d\n", result);

    return 0;
}

int gcd(int a, int b) {
    int tmp1[MAX_SIZE], tmp2[MAX_SIZE];
    int t = 0, s = 0, u = 0, result, max_i, max_j;

    for (int i = 1; i < a; i++) {
        if (a % i == 0)
            tmp1[t++] = i;
    }
    max_i = t;

    t = 0;
    for (int i = 1; i < b; i++) {
        if (b % i == 0)
            tmp2[t++] = i;
    }
    max_j = t;

    
    while(s < max_i && u < max_j) {
        if (tmp1[s] == tmp2[u]) {
            result = tmp1[s];
            s++;
            u++;
        }
        else if (tmp1[s] > tmp2[u]) {
            u++;
        }
        else if (tmp1[s] < tmp2[u]) {
            s++;
        }
    }

    return result;
}
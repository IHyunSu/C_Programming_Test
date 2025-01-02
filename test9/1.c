#include <stdio.h>

int max(int a, int b, int c);
int middle(int a, int b, int c);
int min(int a, int b, int c);

int main () {
    int a, b, c;
    int max_result, middle_result, min_result;

    while (1) {
        scanf("%d %d %d", &a, &b, &c);

        if (a == 0 && b == 0 && c == 0) break;

        max_result = max(a, b, c); 
        middle_result = middle(a, b, c); 
        min_result = min(a, b, c);

        printf("%d %d %d\n", max_result, min_result, middle_result);
    }

    return 0;
}

int max(int a, int b, int c) {
    int result = (a > b && a > c) ? a : (b > c) ? b : c;

    return result; 
}

int middle(int a, int b, int c) {
    int max = (a > b && a > c) ? a : (b > c) ? b : c;
    int min = (a < b && a < c) ? a : (b < c) ? b : c;
    int list[3] = {a, b, c};
    int u, s, result;

    for (int i = 0; i < 3; i++) {
        if (list[i] == max) list[i] = 0;
        else if (list[i] == min) list[i] = 0;
    }

    for (int i = 0; i < 3; i++) {
        if (list[i] != 0) result = list[i];
    }

    return result; 
}

int min(int a, int b, int c) {
    int result = (a < b && a < c) ? a : (b < c) ? b : c;
    
    return result;
}
#include <stdio.h>

void recursive_program(int x);

int main () {
    int x;

    scanf("%d", &x);

    recursive_program(x);

    return 0;
}

void recursive_program(int x) {
    if (x <= 0) return;
    printf("%d", x % 10);
    recursive_program(x / 10);
}
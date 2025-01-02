#include <stdio.h>

int isPrime(int x);

int main () {
    int x;
    scanf("%d", &x);
    printf("%s", isPrime(x) ? "prime": "not prime");

    return 0;
}

int isPrime(int x) {
    int result = 1;
    for (int i = 2; i < x; i++) {
        if (x % i == 0) result = 0;
    }

    return result;
}
#include <stdio.h>

int checkTwins(int a);

int main() {
    int a;
    while (1) {
        scanf("%d", &a);
        if (a == 0) break;
        printf("%s\n", checkTwins(a) ? "yes" : "no");
    }
    return 0;
}

int checkTwins(int a) {
    if (a < 10) return 0;
    
    if (a % 10 == (a / 10) % 10) return 1;
    
    return checkTwins(a / 10);
}
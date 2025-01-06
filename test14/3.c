#include <stdio.h>

int checkTwins(int a);

int main () {
    int a;

    while (1) {
        scanf("%d", &a);
        if (a == 0) break;

        int result = checkTwins(a);

        if (result == 1) printf("yes\n");
        else if (result == 0) printf("no\n");
    }

    return 0;

}

int checkTwins(int a) {
    if (a < 10) return 1;

    if (a % 10 != ((a / 10) % 10)) return 0;

    else return 1;

    return checkTwins(a % 10);
}
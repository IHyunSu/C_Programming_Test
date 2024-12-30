#include <stdio.h>
#include <math.h>
#define SQ2(x) ((pow(x, 4)))

int main () {
    int x;
    
    scanf("%d", &x);

    int result = SQ2(x);

    printf("%d\n", result);

    return 0;
}
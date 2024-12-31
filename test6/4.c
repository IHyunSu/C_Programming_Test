//프로그래밍기초 #06
//2024004501 이현수

#include <stdio.h>
#include <math.h>

int main () {
    int C, result, target, n = 0;
    double F;
    
    scanf("%d", &C);

    F = (double)9/5 * (double)C + 32;

    result = round(F);

    while (1) {
        scanf("%d", &target);
        if (target < result) {
            printf("small\n");
            n++;
        }
        else if (target > result) {
            printf("large\n");
            n++;
        }
        else {
            n++;
            printf("correct %d", n);
            break;
        }
    }

    return 0;
}
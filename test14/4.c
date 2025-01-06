#include <stdio.h>

void printBin(int a) {
    if (a > 1) {
        printBin(a / 2);
    }
    printf("%d", a % 2);
}

void printFloatBin(double a) {
    int intPart = (int)a;
    double fractPart = a - intPart;
    
    printBin(intPart);
    if (fractPart == 0) {
        printf(".");
        printf("0");
    }
    
    if (fractPart > 0) {
        printf(".");
        int count = 0;
        while (count < 10 && fractPart > 0) {
            fractPart *= 2;
            int bit = (int)fractPart;
            printf("%d", bit);
            fractPart -= bit;
            count++;
        }
    }
    printf("\n");
}

int main() {
    double num;
    
    while (1) {
        scanf("%lf", &num);
        if (num == 0.0) break;
        printFloatBin(num);
    }
    
    return 0;
}
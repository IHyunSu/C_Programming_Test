// 2024004501 이현수

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void convert_to_base_n(int decimal_num, int n) {
    if (decimal_num == 0) {
        printf("0");
        return;
    }
    
    char digits[] = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    char result[100];
    int index = 0;
    
    int is_negative = decimal_num < 0;
    decimal_num = abs(decimal_num);
    
    while (decimal_num > 0) {
        result[index++] = digits[decimal_num % n];
        decimal_num /= n;
    }
    
    if (is_negative) {
        printf("-");
    }
    
    for (int i = index - 1; i >= 0; i--) {
        printf("%c", result[i]);
    }
}

int main() {
    int num, base;
    
    scanf("%d", &num);
    
    scanf("%d", &base);
    
    if (base >= 2 && base <= 36) {
        convert_to_base_n(num, base);
        printf("\n");
    } else {
        printf("2에서 16 사이의 진법만 지원합니다.\n");
    }
    
    return 0;
}
// 2024004501 이현수

#include <stdio.h>
#define MAX_SIZE 101

void print_diamond(int n) {
    int list[MAX_SIZE] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    int tmp[MAX_SIZE] = {0, 0, 0, 1, 0, 2, 0, 3, 0, 4, 0, 5, 0, 6, 0, 7, 0, 8};
    int k = 0, s = 0;
    s = n;

    for(int i = 1; i <= n/2+1; i++) {
        for(int space = 0; space < n - i - tmp[s]; space++) {
            printf(" ");
        }
        
        for(int j = i; j >= 1; j--) {
            if (k > 9) k = 0;
            printf("%d", list[k++]);
        }
        
        for(int j = 2; j <= i; j++) {
            if (k > 9) k = 0;
            printf("%d", list[k++]);
        }
        
        printf("\n");
    }
    
    for(int i = n/2; i >= 1; i--) {
        for(int space = 0; space < n - i - tmp[s]; space++) {
            printf(" ");
        }
        
        for(int j = i; j >= 1; j--) {
            if (k > 9) k = 0;
            printf("%d", list[k++]);
        }
        
        for(int j = 2; j <= i; j++) {
            if (k > 9) k = 0;
            printf("%d", list[k++]);
        }
        
        printf("\n");
    }
}

int main() {
    int n;
    scanf("%d", &n);
    if (((n % 2 != 0) && ((n >= 0) && (n <= 20)))) print_diamond(n);
    return 0;
}
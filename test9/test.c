#include <stdio.h>
#define MAX_SIZE 1001

int checkLastDigit(int arr[], int size, int num) {
    int count = 0;
    for (int i = 0; i < size; i++) {
        if (arr[i] % 10 == num) {
            count++;
        }
    }
    return count;
}

int main() {
    int n;
    int numbers[MAX_SIZE];
    
    // 배열 크기 입력
    scanf("%d", &n);
    
    // n개의 양의 정수 입력
    for (int i = 0; i < n; i++) {
        scanf("%d", &numbers[i]);
    }
    
    // 0부터 9까지의 끝자리 개수 출력
    for (int i = 0; i < 10; i++) {
        int result = checkLastDigit(numbers, n, i);
        printf("%d %d\n", i, result);
    }
    
    return 0;
}

#include <stdio.h>
#include <math.h>
#define MAX_SIZE 1001

int checkLastDigit(int arr[], int size, int num);

int main () {
    int n, size, index = 0;

    int n_list[MAX_SIZE] = {0};
    int check_list[MAX_SIZE] = {0};
    scanf("%d", &size);

    //1 (create)
    for (int i = 0; i < size; i++) {
        scanf("%d", &n);
        n_list[i] = n;
    }

    //2 (plus)
    for (int i = 0; i < size; i++) {
        index = checkLastDigit(n_list, size, i);
        check_list[index] += 1;
    }


    //3 (check)
    int i = 0, j = 0;
    while (i < size && (j >= 0 && j <= 10)) {
        j++;
        if (check_list[j] >= 1) {
            printf("%d %d\n", j, check_list[j]);
            i++;
        }
    }

    return 0;

}

int checkLastDigit(int arr[], int size, int num) {
    double current;
    current = floor((double)arr[num] * 0.1) / 0.1;

    int result;
    result = arr[num] % (int)current;
    
    return result;
}
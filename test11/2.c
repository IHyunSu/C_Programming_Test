#include <stdio.h>
#include <stdlib.h>

int main () {
    int num, cnt = 0;
    int result[10001], i = 0;

    FILE *file = fopen("f2.txt", "r");

    if (file == NULL) {
        printf("can not open file\n");
        exit(1);
    }

    while (fscanf(file, "%d", &num) == 1) {
        if (num >= 90) {
            cnt++;
            result[i++] = num;
        }
    }
    fclose(file);

    printf("90점 이상:\n");
    for (int j = 0; j < cnt; j++) {
        printf("%d\n", result[j]);
    }

    printf("개수:\n");
    printf("%d\n", cnt);
}
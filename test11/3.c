#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main () {
    char tmp;
    int sum = 0;

    FILE *file = fopen("f3.txt", "r");
    if (file == NULL) {
        printf("can not open file\n");
        exit(1);
    }

    FILE *file2 = fopen("f3out.txt", "w");
    if (file2 == NULL) {
        printf("can not open file\n");
        exit(1);
    }

    while ((fscanf(file, "%c", &tmp)) == 1) {
        if (isdigit(tmp)) {
            fprintf(file2, "%c", tmp);
            sum += tmp - '0';
        }
    }

    fclose(file);
    fclose(file2);

    printf("%d\n", sum);

    return 0;
}
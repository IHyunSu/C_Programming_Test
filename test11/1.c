#include <stdio.h>
#include <stdlib.h>

int main () {
    char words[50];

    FILE *file;
    file = fopen("f1.txt", "r");

    if (file == NULL) {
        printf("can not open file\n");
        exit(1);
    }

    while (fscanf(file, "%s", words) == 1) {
        printf("%s ", words);
    }

    fclose(file);

    return 0;
}
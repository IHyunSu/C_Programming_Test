#include <stdio.h>
#include <stdlib.h>

void print(FILE *file, const char *fileName);

int main () {
    char *f1Name = "f21.txt";
    char *f2Name = "f22.txt";
    FILE* files[2];
    files[0] = fopen(f1Name, "r");
    files[1] = fopen(f2Name, "r");

    if ((files[0]) != NULL) {
        printf("%s 파일 열기에 성공\n", f1Name);
    }
    if ((files[1]) != NULL) {
        printf("%s 파일 열기에 성공\n", f2Name);
    }

    print(files[0], f1Name);
    printf("\n\n");
    print(files[1], f2Name);

    fclose(files[0]);
    fclose(files[1]);
    return 0;
}

void print(FILE *file, const char *fileName) {
    file = fopen(fileName, "r");

    char ch;
    while ((ch = fgetc(file)) != EOF) {
        putchar(ch);
    }
}
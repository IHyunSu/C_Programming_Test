#include <stdio.h>

#include <stdlib.h>

#include <string.h>

int main(int argc, char* argv[]) {
    printf("%s\n", argv[1]);
    if (argc != 4) {
        printf("사용방법: 프로그램이름 <operation> <num1> <num2>\n");
        return 1;
    }
    char* oper = argv[1];
    double d1 = atof(argv[2]);
    double d2 = atof(argv[3]);
    double result;

    if (strcmp(oper, "+") == 0) {
        result = d1 + d2;
    } else if (strcmp(oper, "-") == 0) {
        result = d1 - d2;
    } else if (strcmp(oper, "*") == 0) {
        result = d1 * d2;
    } else if (strcmp(oper, "/") == 0) {
        result = d1 / d2;
    }
    printf("Result = %.1f", result);
    return 0;

}
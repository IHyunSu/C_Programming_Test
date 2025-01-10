#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int c, char* arr[]) {

    if (c != 4) {
        printf("MENUAL: \"programname\" <operation> <num1> <num2>\n");
        exit(1);
    }

    char* operation = arr[1];
    double a = atof(arr[2]);
    double b = atof(arr[3]);
    double result;

    if (strcmp(operation, "+") == 0) {
        result = a + b;
    } 
    else if (strcmp(operation, "-") == 0) {
        result = a - b;
    } 
    else if (strcmp(operation, "*") == 0) {
        result = a * b;
    } 
    else if (strcmp(operation, "/") == 0) {
        result = a / b;
    }

    printf("Result = %.1f", result);

    return 0;

}
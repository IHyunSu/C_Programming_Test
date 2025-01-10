#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct {
    char programName[5];
    char operator[5];
    int n1;
    int n2;
} calculator;

void inputCal(calculator *p, double *result);
void printCal(double result);

int main () {
    calculator p;
    double result = 0;

    inputCal(&p, &result);

    return 0;
}

void inputCal(calculator *p, double *result) {
    printf("> ");
    scanf("%s %c %d %d", p->programName, p->operator, &p->n1, &p->n2);

    if (p->n1 == '\0' || p->n2 == '\0')
        printf("사용방법: 프로그램이름 <operation> <num1> <num2>\n");

    if (strcmp(p->programName, "p1") == 0) {
        if (strcmp(p->operator, "+") == 0) {
            (*result) = ((double)p->n1 + p->n2);
        } 
        else if (strcmp(p->operator, "-") == 0) {
            (*result) = ((double)p->n1 - p->n2);
        } 
        else if (strcmp(p->operator, "*") == 0) {
            (*result) = ((double)p->n1 * p->n2);
        } 
        else if (strcmp(p->operator, "/") == 0) {
            (*result) = ((double)p->n1 / p->n2);
        } else {
            printf("사용방법: 프로그램이름 <operation> <num1> <num2>\n");
        }
        printCal(*result);
    }
}

void printCal(double result) {
    printf("Result = %.2f\n", result);
}
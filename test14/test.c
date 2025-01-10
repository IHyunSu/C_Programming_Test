#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_SIZE 11
#define MAX_LEN 101

typedef struct Employee {
    int empidenNum;
    char name[MAX_LEN];
    char location[MAX_LEN];
    int salary;
    double incentive;
} Employee;

void input(Employee e[], int *count);
double employeeCal(Employee e[], int i);
void print(Employee e[], int count);

int main() {
    Employee e[MAX_SIZE];
    
    int count = 0;
    input(e, &count);
    print(e, count);
    
    return 0;
}

void input(Employee e[], int *count) {
    FILE *file = fopen("f3.txt", "r");
    if (file == NULL) {
        fprintf(stderr, "Cannot open file\n");
        exit(1);
    }

    while (*count < MAX_SIZE) {
        if (fscanf(file, "%d %s", &e[*count].empidenNum, e[*count].name) != 2) {
            break;
        }
        if (fgets(e[*count].location, MAX_LEN, file) == NULL) {
            break;
        }
        // fgets()로 인해 줄바꿈 문자가 포함될 수 있으므로 제거
        e[*count].location[strlen(e[*count].location) - 1] = '\0';
        if (fscanf(file, "%d %lf", &e[*count].salary, &e[*count].incentive) != 2) {
            break;
        }

        (*count)++;
    }

    fclose(file);
}

double employeeCal(Employee e[], int i) {
    return e[i].salary * (12 + e[i].incentive);
}

void print(Employee e[], int count) {
    for (int i = 0; i < count; i++) {
        printf("%d %s %s %d %d %.1f\n", e[i].empidenNum, e[i].name, e[i].location, 
               e[i].salary, (int)(e[i].incentive * 10), employeeCal(e, i));
    }
}

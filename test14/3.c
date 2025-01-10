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

void input(Employee *e, int *count);
double employeeCal(Employee *e, int i);
void print(Employee *e, int count);

int main() {
    Employee *e = (Employee *)malloc(sizeof(Employee) * MAX_SIZE);
    if (e == NULL) {
        fprintf(stderr, "Memory allocation failed\n");
        return 1;
    }
    
    int count = 0;
    input(e, &count);
    print(e, count);
    
    free(e);
    return 0;
}

void input(Employee *e, int *count) {
    FILE *file = fopen("f3.txt", "r");
    if (file == NULL) {
        fprintf(stderr, "Cannot open file\n");
        exit(1);
    }

    while (*count < MAX_SIZE) {
        fscanf(file, "%d", &e[*count].empidenNum);
        fscanf(file, "%s", e[*count].name);
        fgetc(file);
        fgets(e[*count].location, MAX_LEN, file);
        e[*count].location[strlen(e[*count].location) - 1] = '\0';
        fscanf(file, "%d", &e[*count].salary);
        if (fscanf(file, "%lf", &e[*count].incentive) != 1)
            break;
        (*count)++;
    }

    fclose(file);
}

double employeeCal(Employee *e, int i) {
    return e[i].salary * (12 + e[i].incentive);
}

void print(Employee *e, int count) {
    for (int i = 0; i < count; i++) {
        printf("%d %s %s %d %d%% %.1f\n", e[i].empidenNum, e[i].name, e[i].location, 
               e[i].salary, (int)(e[i].incentive * 100), employeeCal(e, i));
    }
}

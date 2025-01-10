#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_LEN 11
#define MAX_SIZE 101

typedef struct Student {
    int num;
    char name[MAX_LEN];
    double grade1;
    double grade2;
    double quiz;
} Student;

void input(Student *s, int *count);
void print(Student *s, int count);
void search(Student *s, int count, char *name);

int main () {
    Student *student;
    student = (Student*)malloc(sizeof(Student) * MAX_SIZE);
    int count = 0;
    char findName[MAX_LEN];

    input(student, &count);
    print(student, count);

    scanf("%s", findName);
    search(student, count, findName);

    return 0;
}

void input(Student *s, int *count) {
    int i = 0;
    FILE *file;
    if ((file = fopen("f5.txt", "r")) == NULL) {
        fprintf(stderr, "Cannot open file\n");
        exit(1);
    }

    while ((fscanf(file, "%s %lf %lf %lf", s[*count].name, &s[*count].grade1, &s[*count].grade2, &s[*count].quiz) == 4)) {
        s[*count].num = ++i;
        (*count)++;
    }

    return;
}

void print(Student *s, int count) {
    for (int i = 0; i < count; i++) {
        printf("%d %s %.1f %.1f %.1f\n", s[i].num, s[i].name, s[i].grade1, s[i].grade2, s[i].quiz);
    }

    return;
}

void search(Student *s, int count, char *name) {
    int result = 0;
    for (int i = 0; i < count; i++) {
        if (strcmp(s[i].name, name) == 0) {
            printf("%d %s %.1f %.1f %.1f\n", s[i].num, s[i].name, s[i].grade1, s[i].grade2, s[i].quiz);
            result++;
        }
    }
    if (result == 0)
        printf("해당 자료를 찾을 수 없습니다.\n");
    return;
}
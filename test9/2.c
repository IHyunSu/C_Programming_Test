#include <stdio.h>

char scoreToGrade(int score);

int main () {
    int grade;
    char result;
    while (1) {
        scanf("%d", &grade);

        if (grade == -1) break;

        result = scoreToGrade(grade);

        printf("%c\n", result);
    }

    return 0;
}

char scoreToGrade(int score) {
    if (score >= 90) return 'A';
    else if (score >= 80) return 'B';
    else if (score >= 70) return 'C';
    else if (score >= 60) return 'D';
    else return 'F';
}
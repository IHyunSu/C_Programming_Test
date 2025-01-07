#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

#define MAX_COUNT 10000

double findAvg(double sum);
double findStd(double avg);

int main () {
    int num, i = 0;
    double sum, var, avg, std = 0;

    FILE *file = fopen("f5.txt", "w");

    if (file == NULL) {
        printf("can not open file\n");
        exit(1);
    }

    srand(time(NULL));

    while (i < MAX_COUNT) {
        num = rand() % 100;
        if (num >= 1) {
            fprintf(file, "%d\n", num);
            sum += (float)num;
            i++;
        }
    }
    fclose(file);

    avg = findAvg(sum);
    std = findStd(avg);

    printf("평균 : %.2f\n", avg);
    printf("표준편차 : %.2f\n", std);

    return 0;
}

double findAvg(double sum) {
    double avg;

    avg = sum / MAX_COUNT;

    return avg;
}

double findStd(double avg) {
    double num, std, var = 0;
    FILE *file = fopen("f5.txt", "r");

    if (file == NULL) {
        printf("can not open file\n");
        exit(1);
    }

    for (int i = 0; i < MAX_COUNT; i++) {
        fscanf(file, "%lf", &num);
        var += (num - avg) * (num - avg);
    }
    var = var / MAX_COUNT;

    fclose(file);

    std = sqrt(var);

    return std;
}
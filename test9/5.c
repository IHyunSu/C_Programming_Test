#include <stdio.h>
#include <limits.h>
#define MAX_SIZE 101

double getJudgeData(double d);
void calcScore(double d[], int n);
double findLowest(double d[], int n);
double findHighest(double d[], int n);

int main () {
    double d[MAX_SIZE];

    int size, i = 0, j = 0;
    double n, add_n;

    scanf("%d", &size);

    while (i < size) {
        scanf("%lf", &n);
        add_n = getJudgeData(n);
        if (add_n) {
            d[j++] = add_n;
            i++;
        }
    }

    calcScore(d, j);

    return 0;
}

double getJudgeData(double d) {
    if (d >= 0 && d <= 10) {
        return d;
    }
    return 0;
}

void calcScore(double d[], int n) {
    double max = findHighest(d, n);
    double min = findLowest(d, n);
    int count = 0;

    for (int i = 0; i < n; i++) {
        if (d[i] == max || d[i] == min) d[i] = 0;
    }

    double sum = 0, avg = 0;

    for (int i = 0; i < n; i++) {
        if (d[i] != 0) {
            count++;
            sum += d[i];
        }
    }
    avg = sum / count;
    printf("%.2f\n", avg);

    return;
}

double findLowest(double d[], int n) {
    double min = 50;
    
    for (int i = 0; i < n; i++) {
        if (d[i] < min) min = d[i];
    }

    return min;
}

double findHighest(double d[], int n) {
    double max = 0;
    
    for (int i = 0; i < n; i++) {
        if (d[i] > max) max = d[i];
    }

    return max;
}
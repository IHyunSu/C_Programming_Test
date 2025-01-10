#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    double x;
    double y;
} Point;

typedef struct {
    double slope;
    double yintercept;
} Line;

Line calculate(Point a, Point b);

int main () {
    Point a;
    Point b;
    Line result;

    scanf("%lf %lf", &a.x, &a.y);
    scanf("%lf %lf", &b.x, &b.y);

    result = calculate(a, b);

    printf("%.1f %.1f\n", result.slope, result.yintercept);

    return 0;
}

Line calculate(Point a, Point b) {
    Line temp;

    temp.slope = (b.y - a.y) / (b.x - a.x);
    temp.yintercept = a.y - temp.slope * a.x;

    return temp;
}
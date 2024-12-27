#include <stdio.h>

int main () {
    double x = 5.1247, y = 20.7807, z = 17.34;
    printf("%.6f %.6f %.6f\n", x, y, z);
    printf("%.6f\n%.6f\n", x + y + z, x - y - z);
    printf("%.6f\n%.6f\n", x / y / z, (x * y) / z);
}
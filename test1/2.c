#include <stdio.h>

int main()
{
    double x = 3.141592, y = 5.435231;
    int a = 32, b = 56;
    char c = 'b', d = 'c';

    printf("%d %d\n", a, b);
    printf("%.6f %.6f\n", x, y);
    printf("%c %c", c, d);

    return 0;
}
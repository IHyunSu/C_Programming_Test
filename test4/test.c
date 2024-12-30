// 프로그래밍 기초 실습 #04 실근 중근 허근 문제
// 2024004501 이현수

#include <stdio.h>
#include <math.h>

int main() {
    int a, b, c;
    double discriminant, root1, root2;
    
    scanf("%d %d %d", &a, &b, &c);
    
    if (a == 0) {
        root1 = (double)-c / b;
    } else {
        discriminant = b * b - 4 * a * c;
        
        if (discriminant > 0) {
            root1 = (-b + sqrt(discriminant)) / (2 * a);
            root2 = (-b - sqrt(discriminant)) / (2 * a);
            printf("%.6f, %.6f\n", root1, root2);
        }
        else if (discriminant == 0) {
            root1 = -b / (2 * a);
            printf("%.6f\n", root1);
        }
        else {
            printf("허근입니다\n");
        }
    }
    
    return 0;
}
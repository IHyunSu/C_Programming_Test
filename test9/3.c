#include <stdio.h>
#include <math.h>
int kineticEnergy(int weight, int velocity);

int main() {
    int n, m;
    int KE;
    
    scanf("%d %d", &n, &m);
    KE = kineticEnergy(n, m);

    printf("%d\n", KE);
    
    return 0;
}

int kineticEnergy(int weight, int velocity) {
    int result;
    result = 0.5 * weight * pow(velocity, 2);
    return result;
}
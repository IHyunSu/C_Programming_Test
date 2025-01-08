#include <limits.h>
#include <stdio.h>
#include <stdlib.h>  

double *bulidArray(int *n);

int compare (const void * a, const void * b)
{
    if (*(double *)a > *(double *)b) return 1;
	else if (*(double *)a < *(double *)b) return -1;
	else return 0;
}

int main ()
{
    int n;
    double *arr;

    arr = bulidArray(&n);

    qsort (arr, n, sizeof(double), compare);

    for (int i = 0; i < n; i++)
        printf ("%.2f ",arr[i]);

    return 0;
}

double *bulidArray(int *n) {
    double num, *tmp;
    FILE *file;
    if ((file = fopen("f3.txt", "r")) == NULL) {
        printf("can not open file\n");
        exit(1);
    }

    fscanf(file, "%d", n);
    tmp = (double*) malloc (sizeof(double) * (*n));

    for (int i = 0; i < (*n); i++) {
        fscanf(file, "%lf", &num);
        tmp[i] = num;
    }

    return tmp;
}
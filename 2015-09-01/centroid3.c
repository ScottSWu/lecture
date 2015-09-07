#include <time.h>
#include <stdio.h>
#include <stdlib.h>

int main() {
    int i;
    srand((unsigned) 1);

    printf("Start\n");
    double * xarr = (double *) malloc(sizeof(double) * (1000000));
    double * yarr = (double *) malloc(sizeof(double) * (1000000));
    for (i = 0; i < 1000000; i++) {
        xarr[i] = (double) rand() / RAND_MAX;
        yarr[i] = (double) rand() / RAND_MAX;
    }
    printf("Numbers\n");

    clock_t start, end;
    double centerX = 0.0;
    double centerY = 0.0;

    printf("Average\n");
    start = clock();
    for (i = 0; i < 1000000; i++) {
        centerX += xarr[i];
    }
    for (i = 0; i < 1000000; i++) {
        centerY += yarr[i];
    }
    centerX *= 0.000001;
    centerY *= 0.000001;
    end = clock();
    printf("Done\n");
    printf("%f %f\n", centerX, centerY);
    printf("%d\n", end - start);
}


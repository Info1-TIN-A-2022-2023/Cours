#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(int argc, char const *argv[])
{
    unsigned long k_max = 0;
    unsigned long n = 0;
    double num = 1;
    double sum = 0.;

    if(argc!=2) {
        puts("Error, bad number of arguments.");
        return 1;
    }
    k_max = atol(argv[1]);

    for (n = 0; n < k_max; n++)
    {
        sum += num / (2 * n + 1);
        num = -num;
    }
    printf("pi =%.20lf\n", 4 * sum);
    printf("err=%g\n", 4 * sum-M_PI);

    return 0;
}

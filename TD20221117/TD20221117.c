#if 0
#include <stdio.h>
#include <math.h>

int main(void)
{

    int n_max = 1000000000;
    double pi_sur_4 = 0;
    double pi = 0;

    for (size_t n = 0; n <= n_max; n++)
    {
        pi_sur_4 += pow((-1), n) / (2. * n + 1);
    }

    pi = 4. * pi_sur_4;

    printf("pi = %.8lf\n", pi);

    return 0;
}
#else
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(int argc, char const *argv[])
{
    const size_t K_MAX = 1000000000;
    size_t n = 0;
    double num = 1.;
    size_t den = 1;
    double sum = 0.;

    for (n = 0; n <= K_MAX; n++)
    {
#if 0
        sum += pow(-1,n)/(2*n+1);
#elif 0
        sum += num / (2 * n + 1);
        num = -num;
#else
        sum += num / den;
        num = -num;
        den += 2;
#endif
    }

    printf("pi =%.20lf\n", 4 * sum);
    printf("err=%.3E\n", 4 * sum - M_PI);

    return 0;
}
#endif

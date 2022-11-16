#include <stdio.h>
#include <math.h>

int main(int argc, char const *argv[])
{
    // printf("Hello");
    // printf("Hello\n");
    // puts("Hello");

    int a = 42;
    int b = -42;

    unsigned int h = 2;
    unsigned int m = 5;
    unsigned int s = 8;

    double x = M_PI;
    double y = 8.3;
    float yf = 8.3f;

    printf("[%d]\n", a);
    printf("[%8d]\n", a);
    printf("[%-8d]\n", a);
    printf("[%8d]\n", b);
    printf("[%-8d]\n", b);

    printf("[%+8d]\n", a);
    printf("[%+8d]\n", b);
    printf("[%-+8d]\n", a);
    printf("[%-+8d]\n", b);

    printf("a=%+d, b=%+d\n", a, b);

    printf("a=%d\n", a);
    printf("a=%o\n", a);
    printf("a=%X\n", a);

    printf("Heure: %02u:%02u:%02u\n", h, m, s);

    printf("[x=%lf]\n", x);
    printf("[x=%+lf]\n", x);
    printf("[x=%.8lf]\n", x);
    printf("[x=%14.8lf]\n", x);

    printf("y=%.20lf\n", y);

    printf("yf=%.20f\n", yf);

    return 0;
}

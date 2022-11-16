#include <stdio.h>
#include <math.h>

int main(int argc, char const *argv[])
{
    /*
    int n = 0;

    printf("Entrez le nombre de poireaux : ");
    scanf("%d", &n);
    printf("%d poireau%s.\n", n, n >= 2 ? "x" : "");
    */

    /*
        int n = 5;
        int m = 0;

        m = n < 0 ? -1 : n == 0 ? 0 : 1;
    */

    int n = 0;
    for (n = -5; n <= 5; n = n + 2)
    {
        printf("%+d\n", n);
    }
    printf("n final = %d\n", n);
    return 0;
}

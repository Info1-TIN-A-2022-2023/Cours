#include <stdio.h>
#include <math.h>

int main(int argc, char const *argv[])
{
    const int NO_ERROR = 0;
    const int ERR_BAD_VALUE = 1;
    const int ERR_BAD_UNIT = 2;

    double height = 0.;
    double length = 0.;
    double angle = 0.;
    char key = 0;
    double angle_display = 0.;
    int ret = 0;
    char *unit = ""; // empty string (%s for display)

    printf("Enter the height (>0) [m]:");
    ret = scanf("%lf", &height);
    if (ret != 1 || height <= 0)
    {
        puts("Error, bad height value.");
        return ERR_BAD_VALUE;
    }

    printf("Enter the length (>0) [m]:");
    ret = scanf("%lf", &length);
    if (ret != 1 || length <= 0)
    {
        puts("Error, bad length value.");
        return ERR_BAD_VALUE;
    }

    angle = atan2(height, length);

    // vidange du buffer clavier
    getchar();
    printf("Enter the unit [r|d|g]: ");
    key = getchar();

    switch (key)
    {
    case 'r':
        angle_display = angle;
        unit = "rad";
        break;
    case 'd':
        angle_display = angle / M_PI * 180.;
        unit = "deg";
        break;
    case 'g':
        angle_display = angle / M_PI * 200.;
        unit = "grad";
        break;
    default:
        printf("Error, bad unit (input=%d).\n", key);
        return ERR_BAD_UNIT;
        break;
    }
    printf("angle=%.2lf %s\n", angle_display, unit);
    return NO_ERROR;
}

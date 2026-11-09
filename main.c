#include <stdio.h>

int main(void)
{
    float ylimit;
    double g = 9.8;
    double y = 0.0;
    double v = 0.0;
    double t;
    scanf("%f", &ylimit);
    if (ylimit <= 0)
    {
        printf("NG");
        return 0;
    }
    for (t = 0.0; y < ylimit; t += 0.1)
    {
        v = g * t;
        y = g * t * t / 2;
    }
    printf("%.1f", v);
    return 0;
}

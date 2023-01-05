#include <stdio.h>
#include <math.h>
#include <stdlib.h>
struct QuadraticRootsResult
{
    float x1;
    float x2;
    int no_real_roots;
};
struct QuadraticRootsResult findroots(float a, float b, float c)
{
    struct QuadraticRootsResult result;
    float D = (b * b) - (4 * a * c);

    printf("%f", D);
    result.no_real_roots = 0;
    if (D < 0)
    {
        result.no_real_roots = 1;
    }
    else
    {
        result.x1 = (((-1) * b) - sqrtf(D)) / (2 * a);
        result.x2 = (((-1) * b) + sqrtf(D)) / (2 * a);
    }

    return result;
}
int main(void)
{
    long double a = 1;
    long double b = -3;
    long double c = -4;
    struct QuadraticRootsResult result;
    result = findroots(1, -3, 4);
    if (result.no_real_roots == 0)
        printf("x1 = %f ,x2 =  %f", result.x1, result.x2);
    else
    {
        printf("no real roots");
    }
    printf("%d", result.no_real_roots);
}
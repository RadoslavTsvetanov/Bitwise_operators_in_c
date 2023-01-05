#include "quadriticroots.h"
#include <math.h>

struct QuadraticRootsResult findroots(long double a, long double b, long double c)
{
    struct QuadraticRootsResult res;

    long double D = (b * b) - (4 * a * c);

    if (D < 0)
    {
        res.norealroots = 1;
    }
    else
    {
        res.norealroots = 0;
        res.x1 = (-b + sqrtl(D)) / (2 * a);
        res.x2 = (-b - sqrtl(D)) / (2 * a);
    }
    return res;
}
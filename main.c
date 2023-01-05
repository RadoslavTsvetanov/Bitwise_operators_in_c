#include <stdio.h>
#include "quadriticroots.h"

int main()
{
    long double a = 1;
    long double b = -3;
    long double c = -4;
    struct QuadraticRootsResult res;

    res = findroots(1, -3, -4);

    if (res.norealroots == 0)
        printf("Roots are %Lf and %Lf", res.x1, res.x2);
    else
        printf("The equation has no roots");

    return 0;
}
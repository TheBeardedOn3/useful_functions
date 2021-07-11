
#include "include/Useful.hpp"

double Useful::wrap_atan(double y, double x)
{
    double value = NAN;

    if (x > 0)
        value = atan(y / x);

    if (y >= 0 && x < 0)
        value = M_PI + atan(y / x);

    if (y < 0 && x < 0)
        value = -M_PI + atan(y / x);

    if (y > 0 && x == 0)
        value = M_PI / 2;

    if (y < 0 && x == 0)
        value = -M_PI / 2;

    if (value < 0)
        value += 2 * M_PI;
}

double Useful::wrap_atan2(double y, double x)
{
    return mod(atan2(y, x), 2 * M_PI);
}
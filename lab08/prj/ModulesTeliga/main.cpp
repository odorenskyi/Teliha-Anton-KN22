#include <cmath>
#include "ModulesTeliga.h"
double s_calculation(double x, double y, double z)

{
    double S;
    S=1+sqrt(pow((x/abs(y-z)),3)+ pow(x,2)+z/sqrt(abs(z+x)*y)- cos(x*pow(z,2))/2*y + M_PI);
    return S;
}

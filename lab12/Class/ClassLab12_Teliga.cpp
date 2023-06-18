#include "ClassLab12_Teliga.h"
#include <cmath>

ClassLab12_Teliga::ClassLab12_Teliga(double r) {
    radius = r;
}

double ClassLab12_Teliga::getRadius() const {
    return radius;
}

void ClassLab12_Teliga::setRadius(double r) {
    radius = r;
}

double ClassLab12_Teliga::getVolume() const {
    return (4.0 / 3.0) * M_PI * pow(radius, 3);
}

#ifndef CLASSLAB12_TELIGA_H
#define CLASSLAB12_TELIGA_H

class ClassLab12_Teliga {
private:
    double radius;   // –ад≥ус м'€ча

public:
    ClassLab12_Teliga(double r);

    double getRadius() const;
    void setRadius(double r);
    double getVolume() const;
};

#endif // CLASSLAB12_TELIGA_H

#include "ClassLab12_Teliga.h"
#include <iostream>
#include <windows.h>

using namespace std;

int main() {

    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    cout << "ѕрограму створив\n";
    cout << "“ел≥га јнтон ©\n";

    double radius;
    cout << "¬вед≥ть рад≥ус м'€ча: ";
    cin >> radius;

    ClassLab12_Teliga ball(radius);

    cout << "–ад≥ус м'€ча: " << ball.getRadius() << endl;
    cout << "ќб'Їм м'€ча: " << ball.getVolume() << endl;

    double newRadius;
    cout << "¬вед≥ть новий рад≥ус м'€ча: ";
    cin >> newRadius;
    ball.setRadius(newRadius);

    cout << "«м≥нений рад≥ус м'€ча: " << ball.getRadius() << endl;
    cout << "«м≥нений об'Їм м'€ча: " << ball.getVolume() << endl;

    return 0;
}

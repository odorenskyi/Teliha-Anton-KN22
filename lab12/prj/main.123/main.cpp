#include "ClassLab12_Teliga.h"
#include <iostream>
#include <windows.h>

using namespace std;

int main() {

    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    cout << "�������� �������\n";
    cout << "����� ����� �\n";

    double radius;
    cout << "������ ����� �'���: ";
    cin >> radius;

    ClassLab12_Teliga ball(radius);

    cout << "����� �'���: " << ball.getRadius() << endl;
    cout << "��'�� �'���: " << ball.getVolume() << endl;

    double newRadius;
    cout << "������ ����� ����� �'���: ";
    cin >> newRadius;
    ball.setRadius(newRadius);

    cout << "������� ����� �'���: " << ball.getRadius() << endl;
    cout << "������� ��'�� �'���: " << ball.getVolume() << endl;

    return 0;
}

#include <iostream>
#include <cmath>
#include <ModulesTeliga.h>

using namespace std;

void software (int num)
{
    system("chcp 1251");
    system("cls");
    cout<<"�������� �������\n";
    cout<<"����� ����� �";
}
bool logic(double a,double b)
{
    bool res = abs(a-23)<=b+5;
    return res;
}
int main()
{
    software(0);
    cout<<"\n";
    cout<<logic(22,-5);

    cout << "����� ����� \u00A9" << endl;
    int x, y, z;
    char a, b;

    cout << "������ x: ";
    cin >> x;
    cout << "������ y: ";
    cin >> y;
    cout << "������ z: ";
    cin >> z;
    cout << "������ a: ";
    cin >> a;
    cout << "������ b: ";
    cin >> b;

    cout << "|a-22 56+57 = " << ((a - 22) || (56 + 57)) << endl;

    cout << "x (���������) = " << x << endl;
    cout << "x (��������������) = " << hex << x << endl;
    cout << "y (���������) = " << y << endl;
    cout << "y (��������������) = " << hex << y << endl;

    double S = s_calculation(x, y, z);

    cout << "S = " << S << endl;

    return 0;

}

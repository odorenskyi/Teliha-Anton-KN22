#include <iostream>
#include <cmath>
#include <ModulesTeliga.h>

using namespace std;

void software (int num)
{
    system("chcp 1251");
    system("cls");
    cout<<"�������� �������\n";
    cout<<"����� ����� �\n";
}
bool logic(double a,double b)
{
    bool res = abs(a-23)<=b+5;
    return res;
}
int main()
{
    software(0);
    double n_x, n_y, n_z, n_S;
    double a, b;
    int x, y, z, S;
    cout << "������ x: ";
    cin >> n_x;
    cout << "������ y: ";
    cin >> n_y;
    cout << "������ z: ";
    cin >> n_z;
    cout << "������ a: ";
    cin >> a;
    cout << "������ b: ";
    cin >> b;
    n_S = s_calculation(n_x, n_y, n_z);
    cout << "S = " << S << endl;
    x= n_x;
    y= n_y;
    z= n_z;
    S= n_S;
    cout<< "��������� �������� ������:"<<logic(a,b)<< endl;
    cout << "x (���������) = " << x << endl;
    cout << "y (���������) = " << y << endl;
    cout << "z (���������) = " << z << endl;
    cout << "S (���������) = " << S << endl;
    cout << "x (��������������) = " << hex << x << endl;
    cout << "y (��������������) = " << hex << y << endl;
    cout << "z (��������������) = " << hex << z << endl;
    cout << "S (��������������) = " << hex << S;
    return 0;
}

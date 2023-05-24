#include <iostream>
#include <cmath>
#include <ModulesTeliga.h>

using namespace std;

void software (int num)
{
    system("chcp 1251");
    system("cls");
    cout<<"ѕрограму створив\n";
    cout<<"“ел≥га јнтон ©\n";
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
    cout << "¬вед≥ть x: ";
    cin >> n_x;
    cout << "¬вед≥ть y: ";
    cin >> n_y;
    cout << "¬вед≥ть z: ";
    cin >> n_z;
    cout << "¬вед≥ть a: ";
    cin >> a;
    cout << "¬вед≥ть b: ";
    cin >> b;
    n_S = s_calculation(n_x, n_y, n_z);
    cout << "S = " << S << endl;
    x= n_x;
    y= n_y;
    z= n_z;
    S= n_S;
    cout<< "–езультат лог≥чного виразу:"<<logic(a,b)<< endl;
    cout << "x (дес€ткове) = " << x << endl;
    cout << "y (дес€ткове) = " << y << endl;
    cout << "z (дес€ткове) = " << z << endl;
    cout << "S (дес€ткове) = " << S << endl;
    cout << "x (ш≥стнадц€ткове) = " << hex << x << endl;
    cout << "y (ш≥стнадц€ткове) = " << hex << y << endl;
    cout << "z (ш≥стнадц€ткове) = " << hex << z << endl;
    cout << "S (ш≥стнадц€ткове) = " << hex << S;
    return 0;
}

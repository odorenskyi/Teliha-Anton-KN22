#include <iostream>
#include <cmath>
#include <ModulesTeliga.h>

using namespace std;

void software (int num)
{
    system("chcp 1251");
    system("cls");
    cout<<"ѕрограму створив\n";
    cout<<"“ел≥га јнтон ©";
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

    cout << "“ел≥га јнтон \u00A9" << endl;
    int x, y, z;
    char a, b;

    cout << "¬вед≥ть x: ";
    cin >> x;
    cout << "¬вед≥ть y: ";
    cin >> y;
    cout << "¬вед≥ть z: ";
    cin >> z;
    cout << "¬вед≥ть a: ";
    cin >> a;
    cout << "¬вед≥ть b: ";
    cin >> b;

    cout << "|a-22 56+57 = " << ((a - 22) || (56 + 57)) << endl;

    cout << "x (дес€ткове) = " << x << endl;
    cout << "x (ш≥стнадц€ткове) = " << hex << x << endl;
    cout << "y (дес€ткове) = " << y << endl;
    cout << "y (ш≥стнадц€ткове) = " << hex << y << endl;

    double S = s_calculation(x, y, z);

    cout << "S = " << S << endl;

    return 0;

}

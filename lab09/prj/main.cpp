#include <iostream>
#include <cmath>
#include <windows.h>

using namespace std;

void s_calculation() {
    cout << "Функція s_calculation() викликана!" << endl;
}
void task_9_1() {
    float depositAmount;
    int depositMonths;
    cout << "Введіть суму депозиту: ";
    cin >> depositAmount;
    cout << "Введіть строк дії угоди в місяцях (6 або 12): ";
    cin >> depositMonths;
    float interestRate;
    if (depositMonths == 6) {
        interestRate = 11.0;
    } else if (depositMonths == 12) {
        interestRate = 13.0;
    } else {
        cout << "Невірний строк дії угоди!" << endl;
        return;
    }
    float monthlyInterest = (depositAmount * interestRate / 100) / 12;
    float totalInterest = monthlyInterest * depositMonths;
    cout << "Сума щомісячних виплат відсотків: " << monthlyInterest << " грн." << endl;
    cout << "Загальна сума відсотків за весь строк дії договору: " << totalInterest << " грн." << endl;
}
void task_9_2() {
    std::string slovakSize;
    std::cout << "Введіть розмір чоловічої спідні за словацькою системою: ";
    std::cin >> slovakSize;
    std::string frenchSize;
    if (slovakSize == "5")
        frenchSize = "1";
    else if (slovakSize == "6")
        frenchSize = "2";
    else if (slovakSize == "7")
        frenchSize = "3";
    else if (slovakSize == "8")
        frenchSize = "4";
    else if (slovakSize == "9")
        frenchSize = "5";
    else if (slovakSize == "10")
        frenchSize = "6";
    else if (slovakSize == "11")
        frenchSize = "7";
    else {
        std::cout << "Неправильно вказаний розмір!" << std::endl;
        return;
    }
    std::string internationalSize;
    if (frenchSize == "1")
        internationalSize = "XS";
    else if (frenchSize == "2")
        internationalSize = "S";
    else if (frenchSize == "3")
        internationalSize = "M";
    else if (frenchSize == "4")
        internationalSize = "L";
    else if (frenchSize == "5")
        internationalSize = "XL";
    else if (frenchSize == "6")
        internationalSize = "XXL";
    else if (frenchSize == "7")
        internationalSize = "XXXL";
    std::cout << "Відповідник розміру в системі Франції: " << frenchSize << std::endl;
    std::cout << "Відповідник розміру в міжнародній системі: " << internationalSize << std::endl;
}
void task_9_3() {
    int N;
    cout << "Введіть натуральне число N: ";
    cin >> N;
    int countZeros = 0;
    int countOnes = 0;
    while (N > 0) {
        int digit = N % 2;
        if (digit == 0) {
            countZeros++;
        } else {
            countOnes++;
        }
        N /= 2;
    }
    int count = (N & 1) ? countOnes : countZeros;
    cout << "Кількість двійкових " << ((N & 1) ? "одиниць" : "нулів") << ": " << count << endl;
}
int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    cout<<"Програму створив\n";
    cout<<"Теліга Антон ©\n";
    char input;
    while (true) {
        cout << "V - s_calculation\n";
        cout << "n - Завдання 1\n";
        cout << "m - Завдання 2\n";
        cout << "q - Завдання 3\n";
        cout << "Введіть символ(V, n, m, q): ";
        cin >> input;
        if (input == 'V') {
            s_calculation();
        } else if (input == 'n') {
            task_9_1();
        } else if (input == 'm') {
            task_9_2();
        } else if (input == 'q') {
            task_9_3();
        } else {
            cout << "\aПомилкове введення!" << endl;
            continue;
        }
        cout << "Введіть символ 'w' або 'W' для виходу, або будь-що інше для продовження: ";
        cin >> input;
        if (input == 'w' || input == 'W') {
            break;
        }
    }
    return 0;
}


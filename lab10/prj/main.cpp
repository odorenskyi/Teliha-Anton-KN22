#include <iostream>
#include <fstream>
#include <string>
#include <ctime>
#include <bitset>
#include <windows.h>
#include "ModulesTeliga.h"

using namespace std;

 char ch;

int countCharacters(const string& text) {
    return text.length();
}

int countDigits(const string& text) {
    int count = 0;
    for (char c : text) {
        if (isdigit(c)) {
            count++;
        }
    }
    return count;
}

bool containsWords(const string& text, const string& word1, const string& word2, const string& word3, const string& word4) {
    size_t found1 = text.find(word1);
    size_t found2 = text.find(word2);
    size_t found3 = text.find(word3);
    size_t found4 = text.find(word4);

    return (found1 != string::npos || found2 != string::npos || found3 != string::npos || found4 != string::npos);
}

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    std::string filePath = "C:\\Универ\\БМТП\\L-10\\prj\\input.txt";

    ifstream inputFile("input.txt");
    if (!inputFile.is_open()) {
        cout << "Помилка відкриття файлу." << endl;
        return 1;
    }
    string inputText((istreambuf_iterator<char>(inputFile)), istreambuf_iterator<char>());
    inputFile.close();
    string authorName = "Ім'я Прізвище";
    string institution = "Установа/організація";
    string city = "Місто";
    string country = "Країна";
    string developmentYear = "2023";
    ofstream outputFile("output.txt");
    if (!outputFile) {
        cout << "Помилка відкриття файлу." << endl;
        return 1;
    }
    outputFile << "Авторська інформація:" << endl;
    outputFile << "Ім'я й прізвище розробника модуля: " << authorName << endl;
    outputFile << "Установа/організація: " << institution << endl;
    outputFile << "Місто: " << city << endl;
    outputFile << "Країна: " << country << endl;
    outputFile << "Рік розробки: " << developmentYear << endl;
    int characterCount = countCharacters(inputText);
    outputFile << "Кількість символів у вхідному файлі: " << characterCount << endl;
    bool containsPrograma = containsWords(inputText, "програма", "програми", "програму", "програмою");
    bool containsModul = containsWords(inputText, "модуль", "модулю", "модулем", "модулі");
    bool containsStudent = containsWords(inputText, "студент", "студента", "студентом", "студентів");
    bool containsProgramist = containsWords(inputText, "програміст", "програміста", "програмістом", "програмістів");
    outputFile << "Наявність слів у вхідному файлі:" << endl;
    outputFile << "Слово \"програма\": " << (containsPrograma ? "Так" : "Ні") << endl;
    outputFile << "Слово \"модуль\": " << (containsModul ? "Так" : "Ні") << endl;
    outputFile << "Слово \"студент\": " << (containsStudent ? "Так" : "Ні") << endl;
    outputFile << "Слово \"програміст\": " << (containsProgramist ? "Так" : "Ні") << endl;
    time_t currentTime = time(nullptr);
    string dateTime = ctime(&currentTime);
    int digitCount = 0;

    outputFile << "Кількість цифр у тексті: " << digitCount << endl;
    outputFile << "Дата й час дозапису інформації: " << dateTime;
    double x = 1.23;
    double y = 4.56;
    double z = 7.89;
    int b = 5;
    double result = s_calculation(x, y, z);
    outputFile << "Результати виконання функції s_calculation з аргументами x, y, z: " << result << endl;
    string binary = bitset<sizeof(b) * 8>(b).to_string();
    outputFile << "Число b у двійковому коді: " << binary << endl;
    outputFile.close();
    cout << "Виконання завершено. Результати записані у файл output.txt." << endl;

    return 0;
}

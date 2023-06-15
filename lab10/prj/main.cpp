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

    std::string filePath = "C:\\������\\����\\L-10\\prj\\input.txt";

    ifstream inputFile("input.txt");
    if (!inputFile.is_open()) {
        cout << "������� �������� �����." << endl;
        return 1;
    }
    string inputText((istreambuf_iterator<char>(inputFile)), istreambuf_iterator<char>());
    inputFile.close();
    string authorName = "��'� �������";
    string institution = "��������/����������";
    string city = "̳���";
    string country = "�����";
    string developmentYear = "2023";
    ofstream outputFile("output.txt");
    if (!outputFile) {
        cout << "������� �������� �����." << endl;
        return 1;
    }
    outputFile << "��������� ����������:" << endl;
    outputFile << "��'� � ������� ���������� ������: " << authorName << endl;
    outputFile << "��������/����������: " << institution << endl;
    outputFile << "̳���: " << city << endl;
    outputFile << "�����: " << country << endl;
    outputFile << "г� ��������: " << developmentYear << endl;
    int characterCount = countCharacters(inputText);
    outputFile << "ʳ������ ������� � �������� ����: " << characterCount << endl;
    bool containsPrograma = containsWords(inputText, "��������", "��������", "��������", "���������");
    bool containsModul = containsWords(inputText, "������", "������", "�������", "�����");
    bool containsStudent = containsWords(inputText, "�������", "��������", "���������", "��������");
    bool containsProgramist = containsWords(inputText, "���������", "����������", "�����������", "����������");
    outputFile << "�������� ��� � �������� ����:" << endl;
    outputFile << "����� \"��������\": " << (containsPrograma ? "���" : "ͳ") << endl;
    outputFile << "����� \"������\": " << (containsModul ? "���" : "ͳ") << endl;
    outputFile << "����� \"�������\": " << (containsStudent ? "���" : "ͳ") << endl;
    outputFile << "����� \"���������\": " << (containsProgramist ? "���" : "ͳ") << endl;
    time_t currentTime = time(nullptr);
    string dateTime = ctime(&currentTime);
    int digitCount = 0;

    outputFile << "ʳ������ ���� � �����: " << digitCount << endl;
    outputFile << "���� � ��� �������� ����������: " << dateTime;
    double x = 1.23;
    double y = 4.56;
    double z = 7.89;
    int b = 5;
    double result = s_calculation(x, y, z);
    outputFile << "���������� ��������� ������� s_calculation � ����������� x, y, z: " << result << endl;
    string binary = bitset<sizeof(b) * 8>(b).to_string();
    outputFile << "����� b � ��������� ���: " << binary << endl;
    outputFile.close();
    cout << "��������� ���������. ���������� ������� � ���� output.txt." << endl;

    return 0;
}

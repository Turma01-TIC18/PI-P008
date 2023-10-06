#include <iostream>
#include <sstream>
#include <ctime>

using namespace std;

bool isLeapYear(int year) {
    return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
}

bool isValidDate(int day, int month, int year) {
    if (year < 0 || month < 1 || month > 12 || day < 1 || day > 31) {
        return false;
    }

    int daysInMonth[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    if (isLeapYear(year)) {
        daysInMonth[2] = 29;
    }

    return day <= daysInMonth[month];
}

string getMonthName(int month) {
    static const char* monthNames[] = {"", "janeiro", "fevereiro", "março", "abril", "maio", "junho", "julho", "agosto", "setembro", "outubro", "novembro", "dezembro"};
    if (month >= 1 && month <= 12) {
        return monthNames[month];
    }
    return "";
}

int main() {
    string dateInput;
    cout << "Digite uma data no formato dd/mm/aaaa: ";
    cin >> dateInput;
    cout << "" << endl;

    int day, month, year;
    char slash;

    istringstream dateStream(dateInput);
    dateStream >> day >> slash >> month >> slash >> year;

    if (isValidDate(day, month, year)) {
        string monthName = getMonthName(month);
        cout << day << " de " << monthName << " de " << year << endl;
    } else {
        cout << "Data inválida." << endl;
    }
    
    cout << "" << endl;

    return 0;
}

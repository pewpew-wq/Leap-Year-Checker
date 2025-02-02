#include <iostream>

using namespace std;

double LeapYear(int year) {
    if (year % 4 == 0) {
        if (year % 100 == 0) {
            return year % 400 == 0;
        }
        else {
            return true;
        }
    }
    else {
        return false;
    }
}

int main() {
    int year;

    cout << "Enter a year: ";
    cin >> year;

    if (LeapYear(year)) {
        cout << year << " is a leap year.";
    }
    else {
        cout << year << " is not a leap year.";
    }

    return 0;
}
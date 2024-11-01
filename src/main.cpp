#include <iomanip>
#include <iostream>
#include "_pause.h"
#include <string>

using namespace std;

int main() {
    string studentName, programCourse, yearName;
    int yearLevel;
    double numUnits, ratePerUnit, tuitionFee, downPayment, balance;

    cout << "Student Name: ";
    getline(cin, studentName);
    cout << "Program/Course: ";
    getline(cin, programCourse);
    cout << "Year Level: "; 
    cin >> yearLevel;
    cout << "Number of Units: ";
    cin >> numUnits;

    if (yearLevel == 1) {
        yearName = "Freshman";
        ratePerUnit = 1500;
    } else if (yearLevel == 2) {
        yearName = "Sophomore";
        ratePerUnit = 1800;
    } else if (yearLevel == 3) {
        yearName = "Junior";
        ratePerUnit = 2000;
    } else if (yearLevel == 1) {
        yearName = "Senior";
        ratePerUnit = 2300;
    }

    tuitionFee = numUnits * ratePerUnit;
    downPayment = 0.3 * tuitionFee;
    balance = tuitionFee - downPayment;

    cout << "---------------------" << endl;
    cout << "\t\tENROLLMENT SLIP" << endl;
    cout << "Student Name: " << studentName << endl;
    cout << "Program Course: " << programCourse << endl;
    cout << "Year Name: " << yearName << endl;
    cout << "Number of Units: " << numUnits << endl;
    cout << "Tuition Fee: " << tuitionFee << endl;
    cout << "Down Payment: " << downPayment << endl;
    cout << "Balance: " << balance << endl;

    cin.ignore();
    
    _pause();
    return 0;
}
#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int choice;
    char again;

    cout << "      TEMPERATURE CONVERTER\n";
   

    do {
        cout << "\nChoose Conversion:\n";
        cout << "1. Celsius to Fahrenheit & Kelvin\n";
        cout << "2. Fahrenheit to Celsius & Kelvin\n";
        cout << "3. Kelvin to Celsius & Fahrenheit\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        double temp, c, f, k;

        switch (choice) {

        case 1:
            cout << "\nEnter Temperature in Celsius: ";
            cin >> temp;

            f = (temp * 9.0 / 5.0) + 32;
            k = temp + 273.15;

            cout << fixed << setprecision(2);
            cout << "\nTemperature in Fahrenheit: " << f << " F";
            cout << "\nTemperature in Kelvin    : " << k << " K\n";
            break;

        case 2:
            cout << "\nEnter Temperature in Fahrenheit: ";
            cin >> temp;

            c = (temp - 32) * 5.0 / 9.0;
            k = c + 273.15;

            cout << fixed << setprecision(2);
            cout << "\nTemperature in Celsius: " << c << " C";
            cout << "\nTemperature in Kelvin : " << k << " K\n";
            break;

        case 3:
            cout << "\nEnter Temperature in Kelvin: ";
            cin >> temp;

            if (temp < 0) {
                cout << "Invalid! Kelvin cannot be negative.\n";
                break;
            }

            c = temp - 273.15;
            f = (c * 9.0 / 5.0) + 32;

            cout << fixed << setprecision(2);
            cout << "\nTemperature in Celsius   : " << c << " C";
            cout << "\nTemperature in Fahrenheit: " << f << " F\n";
            break;

        case 4:
            cout << "\nThank you for using Temperature Converter!\n";
            return 0;

        default:
            cout << "\nInvalid Choice! Please try again.\n";
        }

        cout << "\nDo you want to perform another conversion? (Y/N): ";
        cin >> again;

    } while (again == 'Y' || again == 'y');

    cout << "\nThank you for using Temperature Converter!\n";

    return 0;
}
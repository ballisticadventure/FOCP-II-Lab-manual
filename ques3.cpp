#include <iostream>
#include <string>
using namespace std;
int main() {
    float temp;
    string unit;
    cout << "Enter the temperature value: ";
    cin >> temp;
    cout << "Enter the unit of temperature (C for Celsius, F for Fahrenheit): ";
    cin >> unit;
    if (unit == "C" || unit == "c") {
        float f = (temp * 9 / 5) + 32;
        cout << "Temp in Fahrenheit = " << f << endl;
    }
    else if (unit == "F" || unit == "f") {
        float c = (temp - 32) * 5 / 9;
        cout << "Temp in Celsius = " << c << endl;
    }
    else {
        cout << "Invalid!" << endl;
    }

    return 0;
}

#include <iostream>
using namespace std;

double kgToLbs(double kg) {
    return kg * 2.20462;
}

double lbsToKg(double lbs) {
    return lbs / 2.20462;
}

double kmToMiles(double km) {
    return km * 0.621371;
}

double milesToKm(double miles) {
    return miles / 0.621371;
}

double cmToInches(double cm) {
    return cm / 2.54;
}

double inchesToCm(double inches) {
    return inches * 2.54;
}

int main() {
    int choice;
    double value;

    cout << "Unit Converter Menu:\n";
    cout << "1. Kilograms to Pounds\n";
    cout << "2. Pounds to Kilograms\n";
    cout << "3. Kilometers to Miles\n";
    cout << "4. Miles to Kilometers\n";
    cout << "5. Centimeters to Inches\n";
    cout << "6. Inches to Centimeters\n";
    cout << "Choose a conversion (1–6): ";
    cin >> choice;


    if (choice < 1 || choice > 6) {
        cerr << "Invalid selection.\n";
        return 1;
    }

    cout << "Enter value to convert: ";
    cin >> value;


    switch (choice) {
    case 1:
        cout << value << " kg = " << kgToLbs(value) << " lbs\n";
        break;
    case 2:
        cout << value << " lbs = " << lbsToKg(value) << " kg\n";
        break;
    case 3:
        cout << value << " km = " << kmToMiles(value) << " miles\n";
        break;
    case 4:
        cout << value << " miles = " << milesToKm(value) << " km\n";
        break;
    case 5:
        cout << value << " cm = " << cmToInches(value) << " inches\n";
        break;
    case 6:
        cout << value << " inches = " << inchesToCm(value) << " cm\n";
        break;
    }

    return 0;
}

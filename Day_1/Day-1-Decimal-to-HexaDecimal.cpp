#include<iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the Decimal Number: ";
    cin >> n;

    if (n < 0) {
        cout << "Please enter a non-negative decimal number." << endl;
        return 1; // Exit with an error code
    }

    if (n == 0) {
        cout << "Hexadecimal Equivalent: 0" << endl;
        return 0; // Exit successfully
    }

    string hex = ""; // To store the hexadecimal equivalent

    while (n > 0) {
        int remainder = n % 16;

        char hexDigit;
        if (remainder < 10) {
            hexDigit = remainder + '0'; // Convert to character
        } else {
            hexDigit = remainder - 10 + 'A'; // Convert to hexadecimal character (A-F)
        }

        hex = hexDigit + hex; // Prepend the digit to the result
        n = n / 16;
    }

    cout << "Hexadecimal Equivalent: " << hex << endl;

    return 0;
}

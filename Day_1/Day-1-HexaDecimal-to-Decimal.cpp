#include<iostream>
#include<cmath>
using namespace std;

int hexToDecimal(char hexDigit) {
    if (hexDigit >= '0' && hexDigit <= '9') {
        return hexDigit - '0';
    } else if (hexDigit >= 'A' && hexDigit <= 'F') {
        return hexDigit - 'A' + 10;
    } else if (hexDigit >= 'a' && hexDigit <= 'f') {
        return hexDigit - 'a' + 10;
    } else {
        // Invalid hexadecimal digit
        return -1;
    }
}

int main() {
    string hex;
    cout << "Enter the Hexadecimal Number: ";
    cin >> hex;

    int decimal = 0;
    int power = 0;

    // Iterate through the hexadecimal digits in reverse order
    for (int i = hex.length() - 1; i >= 0; --i) {
        int digitValue = hexToDecimal(hex[i]);

        if (digitValue == -1) {
            cout << "Invalid hexadecimal digit: " << hex[i] << endl;
            return 1; // Exit with an error code
        }

        decimal += digitValue * pow(16, power);
        ++power;
    }

    cout << "Decimal Equivalent: " << decimal << endl;

    return 0;
}

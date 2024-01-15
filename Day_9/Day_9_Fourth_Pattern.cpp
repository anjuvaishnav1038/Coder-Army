#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the value of n: "<<endl;
    cin >> n;

    for (int i = 0; i < n; ++i) {
        char c = 'A';
        for (int j = n - i; j > 0; --j) {
            cout << c;
            ++c;
        }
        cout << endl;
    }

    return 0;
}

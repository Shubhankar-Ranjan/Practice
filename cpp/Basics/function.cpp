#include<iostream>
using namespace std;

int power(int base, int exp) {
    int result = 1;
    for(int i = 0; i < exp; i++) {
        result *= base;
    }
    return result;
}

int power() {
    int base, exp;
    cout << "Enter the base" << endl;
    cin >> base;
    cout << "Enter the exponent" << endl;
    cin >> exp;
    int result = 1;
    for(int i = 0; i < exp; i++) {
        result *= base;
    }
    return result;
}

int main() {
    int base, exp;
    cout << "Enter the base" << endl;
    cin >> base;
    cout << "Enter the exponent" << endl;
    cin >> exp;

    cout << "The result is " << power(base, exp) << endl;
    cout << "The result is " << power() << endl;

    return 0;
}
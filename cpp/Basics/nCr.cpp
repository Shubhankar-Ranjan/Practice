#include<iostream>
using namespace std;

int factorial(int n){
    int fact = 1;

    for(int i = 1; i <= n; i++) {
        fact *= i;
    }

    return fact;
}

// nCr = n! / (r! * (n - r)!)
int nCr(int n, int r) {
    return ((factorial(n)) / (factorial(r) * factorial(n - r)));
}

int main() {

    int n, r;
    cout << "Enter the value of n" << endl;
    cin >> n;
    cout << "Enter the value of r" << endl;
    cin >> r;

    cout << "The value of nCr is " << nCr(n, r) << endl;

    return 0;
}
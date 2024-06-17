#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    for(int i = 1; i <= 4; i++){
        for(int j = i; j >= 1; j--){
            cout << j << "\t";
        }
        cout << endl;
    }

    return 0;
}
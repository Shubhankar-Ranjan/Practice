#include<iostream>
#include <math.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    float ans = 0; // we are using float because we are using pow function which will return float value
    int i = 0;
    while(n != 0){
        int bit = n & 1;

        ans = (bit * pow(10, i)) + ans;  // this formula will give reverse of the digit ex: 1,2,3 => 321

        n = n >> 1;
        
        i++;
    }

    cout << (int)ans << endl;
}
#include <iostream>
#include <climits>
using namespace std;

int getMax(int n, int num[]){
    int maxi = INT_MIN;

    for(int i = 0; i < n; i++){
        // if (num[i] > max) max = num[i];
        maxi = max(maxi, num[i]);
    }

    return maxi;    
}

int getMin(int n, int num[]){
    int mini = INT_MAX;

    for(int i = 0; i < n; i++){
        // if (num[i] < min) min = num[i];
        mini = min(mini, num[i]);
    }
    return mini;
}

int main(){
    int size;
    cout << "Enter the size of the array: ";
    cin >> size;

    int num[size];

    // taking input in the array 
    for(int i = 0; i < size; i++){
        cin >> num[i];
    }

    int min = getMin(size, num);
    int max = getMax(size, num);

    cout << "min: " << min << endl << "max: " << max << endl;

    return 0;
}
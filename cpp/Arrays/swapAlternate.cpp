#include <iostream>
using namespace std;

void swapAlternate(int *arr, int n){
    for (int i = 0; i < n-1; i+=2) {
        swap(*(arr+i), *(arr+i+1));
    }
}

int main(){
    int n;
    cout << "Enter the size of array: ";
    cin >> n;

    int arr[n];

    cout << "Enter the elements of array: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Original array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    swapAlternate(arr, n);
    
    cout << "Array after swapping: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }


    return 0;
}
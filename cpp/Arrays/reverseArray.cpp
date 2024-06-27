#include <iostream>
using namespace std;

void reverseArray(int *arr, int n){
    int start = 0;
    int end = n-1;
    
    while(start < end){
        int temp = *(arr+start);
        *(arr+start) = *(arr+end);
        *(arr+end) = temp;
        start++;
        end--;
    }
}

int main() {
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

    reverseArray(arr, n);

    cout << "Reversed array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
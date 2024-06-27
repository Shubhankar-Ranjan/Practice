#include <iostream>
using namespace std;

int linearSearch(int *arr, int n, int k){
    for(int i = 0; i < n; i++){
        if(*(arr+i) == k){
            return i;
        }
    }
    return -1;
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

    int k;
    cout << "Enter the element to search: ";
    cin >> k;

    int ans = linearSearch(arr, n, k);

    if (ans == -1) {
        cout << "Element not found";
    } else {
        cout << "Element found at index " << ans;
    }

    return 0;
}
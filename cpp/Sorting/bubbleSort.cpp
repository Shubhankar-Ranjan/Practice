#include<iostream>
using namespace std;

void swap(int arr[], int a, int b);
void bubbleSort(int arr[], int n);

int main() {
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;

    int arr[n];

    cout<< "Enter the elements of the array: ";
    for(int i = 0; i < n; i++) cin >> arr[i];

    cout<< "Arrays before sorting: ";
    for(int i = 0; i < n; i++) cout << arr[i] << " ";
    cout << endl;

    bubbleSort(arr, n);

    cout<< "Arrays after sorting: ";
    for(int i = 0; i < n; i++) cout << arr[i] << " ";
    cout << endl;

    return 0;
}

void swap(int arr[], int a, int b){
    int temp = arr[a];
    arr[a] = arr[b];
    arr[b] = temp;
}

void bubbleSort(int arr[], int n){
    for(int i = 0; i < n-1; i++){
        for(int j = 0; j < n-i-1; j++){
            if(arr[j] > arr[j+1]) swap(arr, j, j+1);
        }
    }
}


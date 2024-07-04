#include<iostream>
using namespace std;

void insertionSort(int arr[], int n){
    for(int i = 1; i < n; i++){
        int temp = arr[i];
        int j = i - 1;
        for(; j >= 0; j--){
            if(arr[j] > temp){
                arr[j+1] = arr[j];
            }
            else break;
        }
        arr[j+1] = temp;
    } 
}

int main(){
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;

    int arr[n];

    cout << "Enter the elements of the array: ";
    for(int i = 0; i < n; i++) cin >> arr[i];

    cout << "Array before sorting: ";
    for(int i = 0; i < n; i++) cout << arr[i] << " ";
    cout << endl;

    insertionSort(arr, n);

    cout << "Array after sorting: ";
    for(int i = 0; i < n; i++) cout << arr[i] << " ";
    cout << endl;

    return 0;
}
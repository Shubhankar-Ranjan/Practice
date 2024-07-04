#include <iostream>
using namespace std;

void swap(int arr[], int a, int b){
    int temp = arr[a];
    arr[a] = arr[b];
    arr[b] = temp;
}

void selectionSort(int arr[], int n){
    for(int i = 0; i < n; i++){
        int mini = i;
        for (int j = i+1; j < n; j++){
            if(arr[j] < arr[mini]) mini = j;
        }
        swap(arr, i, mini);
    }
}

int main(){

    int n;
    cout << "Enter the number of elements: ";
    cin >> n;

    int arr[n];
    cout << "Enter the elements: ";
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    cout << "Arrays before sorting: ";
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;

    selectionSort(arr, n);

    cout << "Arrays after sorting: ";
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }

    return 0;
}
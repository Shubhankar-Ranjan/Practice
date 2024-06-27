#include <iostream>
using namespace std;

int pivotIndex(int arr[], int n){
    int start = 0;
    int end = n - 1;

    while(start < end){
        int mid = start + (end - start) / 2;

        if(arr[mid] > arr[0]) start = mid + 1;
        else end = mid;
    }

    return start;
}

int main(){

    int arr[] = {4, 5, 6, 7, 8, 9, 10, 1, 2, 3};
    int size = sizeof(arr) / sizeof(arr[0]);

    int result = pivotIndex(arr, size);

    cout << "Pivot element found at index: " << result << endl;
    return 0;
}
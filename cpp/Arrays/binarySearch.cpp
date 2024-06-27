#include <iostream>
using namespace std;

int binarySearch(int arr[], int size, int key){
    int start = 0;
    int end = size - 1;

    while(start <= end){

        int mid = start + (end - start) / 2;

        if(arr[mid] == key) return mid;
        else if(arr[mid] > key) end = mid - 1;
        else start = mid + 1;
    }
    
    return -1;
}

int main(){

    int even[] = {2, 4, 6, 8, 12, 18};
    int odd[] = {3, 8, 11, 14, 16};

    int key = 12;

    int sizeEven = sizeof(even) / sizeof(even[0]);
    int sizeOdd = sizeof(odd) / sizeof(odd[0]);

    int result1 = binarySearch(even, sizeEven, key);
    int result2 = binarySearch(odd, sizeOdd, key);

    if(result1 != -1) cout << "Element found at index: " << result1 << endl;
    else cout << "Element not found" << endl;

    if(result2 != -1) cout << "Element found at index: " << result2 << endl;
    else cout << "Element not found" << endl;

    return 0;
}

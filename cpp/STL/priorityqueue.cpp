#include<iostream>
#include<queue>

using namespace std;
int main(){

    // Creating priority queue through STL
    // What is priority queue?
    // Priority queue is a data structure that maintains a set of elements.
    // Each element has an associated priority.
    // An element with high priority is served before an element with low priority.
    // If two elements have the same priority, they are served according to their order in the queue.

    // max heap
    priority_queue<int> maxHeap; // By default, it is a max heap

    // min heap
    priority_queue<int, vector<int>, greater<int>> minHeap; // To make it a min heap, we need to pass the third argument as greater<int>

    // Pushing elements to max heap
    maxHeap.push(10);
    maxHeap.push(30);
    maxHeap.push(20);
    maxHeap.push(50);
    maxHeap.push(40);

    cout << "Size of max heap -> " << maxHeap.size() << endl;

    // Printing the element of max heap
    int n = maxHeap.size();
    for(int i = 0; i < n; i++){  // if we use maxHeap.size() in the loop, it will give wrong output because the size of maxHeap will change in the loop
        cout << maxHeap.top() << " ";
        maxHeap.pop();
    } cout << endl;

    // Pushing elements to min heap
    minHeap.push(50);
    minHeap.push(10);
    minHeap.push(30);
    minHeap.push(40);
    minHeap.push(20);

    cout << "Size of min heap -> " << minHeap.size() << endl;

    // Printing the element of min heap
    int m = minHeap.size();
    for(int i = 0; i < m; i++){  // if we use minHeap.size() in the loop, it will give wrong output because the size of minHeap will change in the loop
        cout << minHeap.top() << " ";
        minHeap.pop();
    } cout << endl;

    // Check if max heap is empty or not
    cout << "Is max heap empty? -> " << maxHeap.empty() << endl;

    // Check if min heap is empty or not
    cout << "Is min heap empty? -> " << minHeap.empty() << endl;

    return 0;
}
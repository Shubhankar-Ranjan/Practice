#include<iostream>
#include<deque>
using namespace std;

int main(){

    // Creating deque through STL
    // What is deque?
    // Deque is a dynamic array
    // It can grow or shrink in size
    // It is a sequence container
    // It is similar to vector but it is more efficient than vector
    // It is double ended queue
    // Insertion and deletion can be done at both ends

    deque<int> d;

    // Adding elements
    d.push_back(1); // Adding element at the end
    d.push_front(2); // Adding element at the beginning

    for(int i: d){
        cout<<i<<" ";
    } cout<<endl;

    // Accessing elements
    cout<<"Element at 1st index: "<<d.at(1)<<endl;

    // Empty or not
    cout<<"Empty or not: "<<d.empty()<<endl;

    // First element
    cout<<"First element: "<<d.front()<<endl;
    // Last element
    cout<<"Last element: "<<d.back()<<endl;

    // Removing elements
    // d.pop_back(); // Removing element from the end
    // d.pop_front(); // Removing element from the beginning

    // Erase elements
    cout<<"Before erase: "<<endl;
    for(int i: d){
        cout<<i<<" ";
    } cout<<endl;

    d.erase(d.begin(), d.begin()+1); // Erase elements from 0th index to 1st index

    cout<<"After erase: "<<endl;
    for(int i: d){
        cout<<i<<" ";
    } cout<<endl;


    return 0;
}
#include<iostream>
#include<vector>

using namespace std;
int main(){

    // Creating vector through STL
    // What is vector?
    // Vector is a dynamic array
    // It can grow or shrink in size
    // It is a sequence container

    vector<int> v;
    cout<<"Capacity -> "<<v.capacity()<<endl; // At the beginning, size is 0

    v.push_back(1);
    cout<<"Capacity -> "<<v.capacity()<<endl; // After adding 1 element, size is 1

    v.push_back(2);
    cout<<"Capacity -> "<<v.capacity()<<endl; // After adding 2nd element, size is 2

    v.push_back(3);
    cout<<"Capacity -> "<<v.capacity()<<endl; // After adding 3rd element, size is 4
    // Why size is 4? Because, vector grows in size by 2 times
    cout<<"Size -> "<<v.size()<<endl; // Size is 3

    // Accessing elements
    cout<<"Element at 2nd index: "<<v.at(2)<<endl;

    // Empty or not
    cout<<"Empty or not: "<<v.empty()<<endl;

    // First element
    cout<<"First element: "<<v.front()<<endl;
    // Last element
    cout<<"Last element: "<<v.back()<<endl;

    cout<<"Before pop_back: "<<endl;
    for(int i: v){
        cout<<i << " ";
    } cout<<endl;

    // Removing last element
    v.pop_back();

    cout<<"After pop_back: "<<endl;
    for(int i: v){
        cout<<i << " ";
    } cout<<endl;    

    // Clear the vector
    // when we clear the vector, size becomes 0 but capacity remains same
    
    cout<<"Before clear: "<<endl;
    cout<<"Size -> "<<v.size()<<endl;
    cout<<"Capacity -> "<<v.capacity()<<endl;

    v.clear();

    cout<<"After clear: "<<endl;
    cout<<"Size -> "<<v.size()<<endl;
    cout<<"Capacity -> "<<v.capacity()<<endl;

    // Initializing vector with size and value
    vector<int> v1(5, 10);

    cout<<"Printing vector v1: ";
    for(int i: v1){
        cout<<i<<" ";
    } cout<<endl;

    // Copying vector v1 into v2

    vector<int> v2(v1);

    cout<<"Printing vector v2: ";
    for(int i: v2){
        cout<<i<<" ";
    } cout<<endl;

    return 0;
}
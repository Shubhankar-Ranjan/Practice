#include<iostream>
#include<list>

using namespace std;
int main(){

    // Creating list through STL
    // What is list?
    // List is a doubly linked list

    list<int> l;

    // Creating list with 5 elements and all elements are 100
    list<int> n(5, 100);

    cout<<"List n: "<<endl;
    for(int i: n){
        cout<<i<<" ";
    } cout<<endl;

    // copy list n into another list
    list<int> l2(n);

    cout<<"List l2: "<<endl;
    for(int i: l2){
        cout<<i<<" ";
    } cout<<endl;

    // Adding elements
    l.push_back(1); // Adding element at the end
    l.push_front(2); // Adding element at the beginning

    for(int i: l){
        cout<<i<<" ";
    } cout<<endl;

    l.erase(l.begin()); // Erase element at 0th index
    cout<<"After erase: "<<endl;
    for(int i: l){
        cout<<i<<" ";
    } cout<<endl;

    cout<<"Size of list: "<<l.size()<<endl;

    return 0;
}
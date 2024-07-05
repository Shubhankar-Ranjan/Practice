#include<iostream>
#include<set>

using namespace std;
int main(){

    // Creating set through STL
    // What is set?
    // Set is a data structure that maintains a set of elements.
    // Each element is unique.
    // Set is implemented using a self-balancing binary search tree.
    // The elements are stored in sorted order.
    // The time complexity of set is O(log n) for insertion, deletion, and searching.
    // The time complexity of set is O(n) for traversal.


    // Creating set
    set<int> s;


    // Inserting elements in set
    s.insert(10);
    s.insert(5);
    s.insert(20);
    s.insert(15);
    s.insert(19);
    s.insert(25);
    s.insert(45);
    s.insert(5); // 5 is already present in set so it will not be inserted again.

    for(auto i: s){
        cout << i << " ";
    } cout << endl;  

    // Erasing elements from set
    s.erase(s.begin());

    for(auto i: s){
        cout << i << " ";
    } cout << endl;  

    // setting iterator to 1 index = 15
    set<int>::iterator it = s.begin();
    it++;

    s.erase(it);

    for(auto i: s){
        cout << i << " ";
    } cout << endl; 

    // Checking if element is present in set
    cout<<"10 is present in set or not: "<<s.count(10)<<endl;
    cout<<"100 is present in set or not: "<<s.count(100)<<endl;

    // Finding element in set
    set<int>::iterator itr = s.find(20);
    cout<<"Element found at itr: "<< *itr<< endl;

    for(auto it = itr; it != s.end(); it++){
        cout<<*it<<" ";
    } cout<<endl;


    return 0;
}

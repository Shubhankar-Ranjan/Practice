#include<iostream>
#include<map> 

using namespace std;
int main(){

    // Creating map through STL
    // What is map?
    // Map is a data structure that maintains a set of key-value pairs.
    // Each key is unique.
    // Map is implemented using a self-balancing binary search tree.
    // The elements are stored in sorted order of keys.
    // The time complexity of map is O(log n) for insertion, deletion, and searching.
    // The time complexity of map is O(n) for traversal.

    
    // Creating map
    map<int, string> m;

    // Inserting elements in map
    // Map is sorted according to keys
    m[1] = "battak";
    m[3] = "billi";
    m[2] = "kutta";

    m.insert({4, "kauwa"});

    cout << "Map: " << endl;
    for(auto i: m){
        cout << i.first << " " << i.second << endl;
    } cout << endl;

    // Finding element in map
    cout << "Finding 3: " << m.count(3) << endl;
    cout<<endl;

    // Erasing element from map
    m.erase(3);

    cout << "Map after erasing 3: " << endl;
    for(auto i: m){
        cout << i.first << " " << i.second << endl;
    } cout << endl;

    auto it = m.find(2);
    cout << "Element found at it: " << it->first << " " << it->second << endl;

    for(auto i = it; i != m.end(); i++){
        cout<<(*i).first<<" "<<(*i).second<<endl;
    }cout<<endl;

    return 0;
}
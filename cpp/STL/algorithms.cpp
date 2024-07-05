#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;
int main(){
    
    vector<int> v;
    v.push_back(1);
    v.push_back(4);
    v.push_back(2);
    v.push_back(3);

    for(auto i : v){
        cout<<i<<" ";
    }cout<<endl;

    // Sorting the vector
    sort(v.begin(),v.end());
    
    // Printing the sorted vector
    for(auto i : v){
        cout<<i<<" ";
    }cout<<endl;

    // Binary search works on sorted order    
    cout<<"Finding 4: "<<binary_search(v.begin(),v.end(),4)<<endl;

    // Lower bound returns the iterator to the first element which is not less than the given value
    cout<<"Lower bound of 3: "<<lower_bound(v.begin(),v.end(),3)-v.begin()<<endl;
    // Upper bound returns the iterator to the first element which is greater than the given value
    cout<<"Upper bound of 3: "<<upper_bound(v.begin(),v.end(),3)-v.begin()<<endl;


    int a = 2;
    int b = 3;

    // Maximum of two numbers
    cout<<"Max of "<<a<<" and "<<b<<": "<<max(a,b)<<endl;
    // Minimum of two numbers
    cout<<"Min of "<<a<<" and "<<b<<": "<<min(a,b)<<endl;

    // Swapping two numbers
    swap(a,b);

    cout<<"After swapping a: "<<a<<" b: "<<b<<endl;


    string s = "abcde";
    // Reversing a string
    reverse(s.begin(),s.end());

    cout<<"Reversed string: "<<s<<endl;

    // Rotate the vector
    rotate(v.begin(),v.begin()+1,v.end());

    cout<<"Rotated vector: ";
    for(auto i : v){
        cout<<i<<" ";
    }cout<<endl;

    // Sorting the vector
    sort(v.begin(),v.end());

    for(auto i : v){
        cout<<i<<" ";   
    }cout<<endl;


    return 0;
}
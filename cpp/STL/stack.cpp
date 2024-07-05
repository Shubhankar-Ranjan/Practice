#include<iostream>
#include<stack>

using namespace std;
int main(){

    // Creating stack through STL
    // What is stack?
    // Stack is a LIFO (Last In First Out) data structure

    stack<string> s;
    
    // Pushing elements to stack
    s.push("Battak");
    s.push("Duck");
    s.push("Goose");


    // Printing the top element of stack
    cout << "Top Element -> " << s.top() << endl;

    // Popping the top element of stack
    s.pop();
    cout << "Top Element -> " << s.top() << endl;

    // Size of stack
    cout << "Size of stack -> " << s.size() << endl;

    // Checking if stack is empty or not
    cout << "Is stack empty? -> " << s.empty() << endl;


    return 0;
}
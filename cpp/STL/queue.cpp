#include<iostream>
#include<queue>

using namespace std;
int main(){

    // Creating queue through STL
    // What is queue?
    // Queue is a FIFO (First In First Out) data structure

    queue<string> q;

    // Pushing elements to queue
    q.push("Battak");
    q.push("Duck");
    q.push("Goose");

    cout<<"First Element -> "<<q.front()<<endl;

    // Popping the first element of queue
    q.pop();

    cout<<"First Element -> "<<q.front()<<endl;

    // Size of queue
    cout<<"Size of queue -> "<<q.size()<<endl;

    return 0;
}
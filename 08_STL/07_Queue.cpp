#include<iostream>
#include<queue>
using namespace std;

int main(){
    queue<char> q; // FIFO
    q.push('a');
    q.push('b');
    q.push('c');
    q.push('d');

    while(!q.empty()){
        cout<<q.front()<<" ";  // front function
        q.pop(); 
    }
    return 0;
}
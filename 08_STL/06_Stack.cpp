#include<iostream>
#include<stack>
using namespace std;

int main(){
    stack<char> s; // LIFO
    s.push('a');
    s.push('b');
    s.push('c');
    s.push('d');

    while(!s.empty()){
        cout<<s.top()<<" ";  // top function
        s.pop();
    }
    return 0;
}
#include<iostream>
#include<queue>
using namespace std;

class StackByQueue{
    queue<int> q1;
    queue<int> q2;

public: 
    void push(int x){
        while(!q1.empty()){
            q2.push(q1.front());
            q1.pop();
        }
        q1.push(x);
        while(!q2.empty()){
            q1.push(q2.front());
            q2.pop();
        }
    }

    void pop(){
        if(q1.empty()){
            cout<<"Stack is empty";
            return;
        }
        q1.pop();
    }

    void top(){
        if(q1.empty()){
            cout<<"Stack is empty";
            return;
        }
        cout<<q1.front();
    }

    bool empty(){
        return q1.empty();
    }
};

int main(){
    StackByQueue s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    while(!s.empty()){
        s.top();
        s.pop();
    }
    return 0;
}
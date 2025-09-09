#include<iostream>
#include<stack>
using namespace std;

class QueueByStack{
    stack<int> s1;
    stack<int> s2;

public:
    void push(int x){
        while(!s1.empty()){
            s2.push(s1.top());
            s1.pop();
        }
        s1.push(x);
        while(!s2.empty()){
            s1.push(s2.top());
            s2.pop();
        }        
    }

    void pop(){
        if(s1.empty()){
            cout<<"Queue is empty";
            return;
        }
        s1.pop();
    }

    void front(){
        if(s1.empty()){
            cout<<"Queue is empty";
            return;
        }
        cout<<s1.top();    
    }

    bool empty(){
        return s1.empty();
    }
};

int main(){
    QueueByStack q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    while(!q.empty()){
        q.front();
        q.pop();
    }
    return 0;
}
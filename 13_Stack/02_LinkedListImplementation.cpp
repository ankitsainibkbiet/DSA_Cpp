#include<iostream>
#include<list>
using namespace std;

class Stack{
private:
    list<int> ll;

public:
    void push(int val){
        ll.push_front(val);
        return;
    }

    void pop(){
        ll.pop_front();
        return;
    }

    int top(){
        return ll.front();
    }

    bool empty(){
        if(ll.size() == 0){
            return true;
        }else{
            return false;
        }
    }
};

int main(){
    Stack s;

    s.push(10);
    s.push(20);
    s.push(30);
    s.push(300);

    while(!s.empty()){
        cout<<s.top()<<endl;
        s.pop();
    }

    return 0;
}
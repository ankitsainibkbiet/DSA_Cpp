#include<iostream>
#include<vector>
using namespace std;

class Stack{
private:
    vector<int> vec;

public:
    void push(int val){
        vec.push_back(val);
        return;
    }

    void pop(){
        vec.pop_back();
        return;
    }

    int top(){
        return vec[vec.size()-1];
    }

    bool empty(){
        if(vec.size() == 0){
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

    while(!s.empty()){
        cout<<s.top()<<endl;
        s.pop();
    }

    return 0;
}
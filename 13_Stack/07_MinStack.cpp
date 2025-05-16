#include<iostream>
#include<stack>
#include<climits>
using namespace std;

class MinStack {
public:
    stack<pair<int, int>> s; 
    int smallest;

    void push(int val) {
        if(s.empty()){
            smallest = val;
        }else{
            smallest = min(smallest, val);
        }
        s.push({val, smallest});
    }
    
    void pop() {
        s.pop();
        if(!s.empty()) smallest = s.top().second;  // this is important to change smallest 
    }
    
    int top() {
        return s.top().first;
    }
    
    int getMin() {
        return s.top().second;
    }
};


int main(){

    MinStack ms;

    ms.push(-10);
    ms.push(14);
    ms.push(-20);
    ms.pop();
    ms.push(10);
    ms.push(-7);
    ms.push(-7);
    ms.pop();
    cout << ms.getMin() << endl;

    return 0;
}
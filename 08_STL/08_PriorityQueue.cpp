#include<iostream>
#include<queue>
using namespace std;

int main(){
    priority_queue<int> q; // greater element first by sorting 
    // priority_queue<int, vector<int>, greater<int>> q;  // smaller element first
    q.push(50);
    q.push(1);
    q.push(27);
    q.push(88);  // log(n)

    while(!q.empty()){
        cout<<q.top()<<" ";  // top function
        q.pop();
    }
    return 0;
}
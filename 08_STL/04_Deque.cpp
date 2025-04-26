#include<iostream>
#include<deque>
using namespace std;

int main(){
    deque<int> deq; // double ended queue is dynamic array  
    deq.push_back(4);
    deq.push_back(5);
    deq.push_front(3);
    deq.push_front(2);
    deq.push_front(1);
    
    cout<<deq[2]<<endl;

    int n = deq.size();
    cout<<n<<endl;

    for(int val : deq){
        cout<<val<<" ";
    }
    return 0;
}
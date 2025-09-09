#include<iostream>
using namespace std;

class CircularQueue{
    int arr[5];

public:
    int f, r, size, cap;

    CircularQueue(){
        f = 0; r = -1;
        size = 0; cap = 5;
    }

    void push(int x){
        if(size == cap){
            cout<<"Queue is Full"<<endl;
        }else{
            r = (r+1)%cap;
            arr[r] = x;
            size++;
        }
    }

    void pop(){
        if(size == 0){
            cout<<"Queue is empty"<<endl;
        }else{
            f = (f+1)%cap;
            size--;
        }
    }

    void front(){
        if(size == 0){
            cout<<"Queue is empty"<<endl;
        }else{
            cout<<arr[f]<<endl;
        }
    }

    void print(){
        if(size == 0){
            cout<<"Queue is empty"<<endl;
        }else{
            int temp = f;
            while(temp != r){
                cout<<arr[temp]<<" ";
                temp = (temp+1)%cap;
            }
            cout<<arr[temp]<<endl;
        }
    }
};

int main(){
    CircularQueue cq;
    cq.push(1);
    cq.push(2);
    cq.push(3);
    cq.push(4);
    cq.pop();
    cq.pop();
    cq.pop();
    cq.pop();
    cq.print();
    cq.front();
    cq.push(2222);
    cq.front();

    return 0;
}
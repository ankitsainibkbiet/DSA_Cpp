#include<iostream>
using namespace std;

class Node{
public:
    int data;
    Node* next;

    Node(int x){
        data = x;
        next = NULL;
    }
};

class Queue{
    Node* head;
    Node* tail;

public:
    Queue(){
        head = tail = NULL;
    }

    void push(int x){
        Node* newNode = new Node(x);
        if(head == NULL){
            head = tail = newNode;
            newNode->next = NULL;
        }else{
            tail->next = newNode;
            tail = tail->next;
        }
    }

    void pop(){
        if(head == NULL){
            cout<<"Queue is empty";
        }else{
            Node* temp;
            temp = head;
            head = head->next;
            delete temp;
        }
    }

    void front(){
        if(head == NULL){
            cout<<"Queue is empty";
        }else{
            cout<<head->data;
            cout<<endl;
        }
    }

    void print(){
        if(head == NULL){
            cout<<"Queue is empty";
        }else{
            Node* temp;
            temp = head;
            while(temp != NULL){
                cout<<temp->data<<" ";
                temp = temp->next;
            }
            cout<<endl;
        }
    }

};

int main(){
    Queue q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.print();
    q.front();
    q.pop();
    q.front();
    q.pop();
    q.front();
    q.pop();
    q.front();
    q.pop();
    q.front();
    return 0;
}
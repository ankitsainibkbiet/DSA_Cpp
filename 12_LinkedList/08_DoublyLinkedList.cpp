#include<iostream>
using namespace std;

class Node{
public:
    int data;
    Node* next;
    Node* prev;

    Node(int val){
        data = val;
        next = prev = NULL;
    }
};

class DoublyList{
private:
    Node* head;
    Node* tail;

public:
    DoublyList(){
        head = tail = NULL;
    }

    void push_front(int val){
        Node* newNode = new Node(val);
        if(head == NULL){
            head = tail = newNode;
            return;
        }else{
            newNode->next = head;
            head->prev = newNode;
            head = newNode;
            return;
        }
    }

    void push_back(int val){
        Node* newNode = new Node(val);
        if(head == NULL){
            head = tail = newNode;
            return;
        }else{
            tail->next = newNode;
            newNode->prev = tail;
            tail = tail->next; 
            return;
        }
    }

    void pop_front(){
        if(head == NULL){
            cout<<"List is empty"<<endl;
            return;
        }else if(head == tail){
            head = tail = NULL;
            return;
        }else{
            Node* temp = head;
            head = head->next;
            head->prev = NULL;  // important
            delete temp;
            return;
        }
    }

    void pop_back(){
        if(head == NULL){
            cout<<"List is empty"<<endl;
            return;
        }else if(head == tail){
            head = tail = NULL;
            return;
        }else{
            Node* temp = tail;
            tail = tail->prev;
            tail->next = NULL;  // important
            delete temp;
            return;
        }
    }

    void print(){
        if(head == NULL){
            cout<<"List is Empty"<<endl;
            return;
        }else{
            Node* temp = head;
            while(temp != NULL){
                cout<<temp->data<<" ";
                temp = temp->next;
            }
            return;
        }
    }
};

int main(){
    DoublyList dll;

    dll.push_front(3);
    dll.push_front(2);
    dll.push_front(1);
    dll.push_back(4);
    dll.push_back(5);

    dll.pop_back();
    dll.pop_back();
    dll.pop_back();
    dll.pop_front();

    dll.push_back(1);

    dll.print();

    return 0;
}
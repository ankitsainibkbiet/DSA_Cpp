#include<iostream>
using namespace std;

class Node{
public:
    int data;
    Node* next;

    Node(int val){
        data = val;
        next = NULL;
    }
};

class CircularList{
private:
    Node* head;
    Node* tail;

public:
    CircularList(){
        head = tail = NULL;
    }

    void push_front(int val){
        Node* newNode = new Node(val);
        if(head == NULL){
            head = tail = newNode;
            tail->next = tail;
            return;
        }else{
            newNode->next = head;
            head = newNode;
            tail->next = head;
            return;
        }
    }

    void push_back(int val){
        Node* newNode = new Node(val);
        if(head == NULL){
            head = tail = newNode;
            tail->next = tail;
            return;
        }else{
            tail->next = newNode;
            tail = newNode;
            newNode->next = head;
            return;
        }
    }

    void pop_front(){
        if(head == NULL){
            cout<<"LinkedList is Empty"<<endl;
            return;
        }else if(head == tail){
            head = tail = NULL;
            return;
        }else{
            Node* temp = head;
            head = head->next;
            tail->next = head;
            delete temp;
            return;
        }
    }

    void pop_back(){
        if(head == NULL){
            cout<<"LinkedList is Empty"<<endl;
            return;
        }else if(head == tail){
            head = tail = NULL;
            return;
        }else{
            Node* temp = head;
            while(temp->next != tail){
                temp = temp->next;
            }
            tail = temp;
            temp = temp->next;
            tail->next = head;
            delete temp;
            return;
        }
    }

    void print(){
        if(head == NULL){
            cout<<"Circular linkedlist is Empty"<<endl;
            return;
        }else{
            Node* temp = head;
            while(temp->next != head){
                cout<<temp->data<<" ";
                temp = temp->next;
            }
            cout<<temp->data<<" "<<endl;
            return;
        }
    }
};

int main(){
    CircularList cll;

    cll.push_back(1);
    cll.push_back(2);
    cll.push_back(1);
    cll.push_back(3);
    cll.push_back(4);

    cll.pop_back();
    cll.pop_back();
    cll.pop_front();

    cll.print();

    return 0;
}
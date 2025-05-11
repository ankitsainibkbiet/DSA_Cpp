#include<iostream>
using namespace std;

class Node{
public:
    int data;
    Node* next;  // Node is a special type of data type and next is a Node type pointer

    Node(int val){
        data = val;
        next = NULL;
    }
};

class List{
private:
    Node* head; 
    Node* tail;

public:
    List(){
        head = tail = NULL;
    }

    void push_front(int val){
        Node* newNode = new Node(val);  // create new a node first
        if(head == NULL){
            head = tail = newNode;
            return;
        }else{
            newNode->next = head;
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
            tail = newNode;
            return;
        }
    }

    void pop_front(){
        if(head == NULL){
            cout<<"Empty"<<endl;
            return;
        }
        Node* temp = head; 
        head = head->next;
        temp->next = NULL;
        delete temp;
        return;
    }

    void pop_back(){
        if(head == NULL){
            cout<<"Empty"<<endl;;
            return;
        }
        Node* temp = head;
        if(temp->next == NULL){
             head = head->next;
            temp->next = NULL;
            delete temp;
            return;
        }
        while(temp->next->next != NULL){ 
            temp = temp->next;
        }
        tail = temp;
        temp = temp->next;
        tail->next = NULL;  
        delete temp;
        return;
    }

    void insert(int val, int position){
        Node* newNode = new Node(val);
        Node* temp = head;
        if(head == NULL && position != 0){
            cout<<"Linked List is empty";
            return;
        }else if(head == NULL && position == 0){
            head = tail = newNode;
            return;
        }else if(head != NULL && position != 0){
            while(position > 1){
            if(temp->next == NULL && position != 1){
                cout<<"Position is Invalid"<<endl;
                return;
            }                
            temp = temp->next;
            position--;
            }
            newNode->next = temp->next;
            temp->next = newNode;
            return;
        }else{
            newNode->next = head;
            head = newNode;
            return;
        }
       
    }

    bool search(int val){
        Node* temp = head;
        if(head == NULL) return false;
        while(temp != NULL){
            if(temp->data == val){
                return true;
            }
            temp = temp->next;  
        }
        return false;
    }

    void print(){
        Node* temp = head;
        while(temp != NULL){
            cout<<temp->data<<" ";
            temp = temp->next;
        }
        cout<<endl;
        return;
    }

};

int main(){
    List LL;

    LL.push_back(1);
    LL.push_back(2);
    LL.push_back(3);
    LL.push_back(4);
    LL.push_back(5);
  
    LL.print();

    cout<<LL.search(5);

    return 0;
}
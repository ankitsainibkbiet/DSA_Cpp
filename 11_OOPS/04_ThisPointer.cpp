#include<iostream>
using namespace std;

class student{
public:
    int id;
    string name;

    student(int id, string name){  // this pointer points to current object properties
        this->id = id;
        (*this).name = name;
    }

    void getInfo(){
        cout<<"ID = "<<id<<endl;
        cout<<"Name = "<<name<<endl;
    }
};

int main(){
    student s1(21, "Ankit");
    s1.getInfo();
    return 0;
}
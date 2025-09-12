#include<iostream>
using namespace std;

class A{
private:
    int salary;

public:
    A() : salary(10) {}

    virtual void show(){
        cout<<"I am Base class A\n";
    }
};

class B : public A{
public:
    void show(){
        cout<<"I am derieved class B";
    }
};

int main(){
    A *ptr = new B();
    ptr->show();  // if not virtual then the A's show will call becoz of pointer type
    delete ptr;
    return 0;
}
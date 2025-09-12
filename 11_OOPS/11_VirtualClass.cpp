#include<iostream>
using namespace std;

class A{
public:
    void showA(){
        cout<<"I am In-Direct-Base class A\n";
    }
};

class B : virtual public A{
public:
    void showB(){
        cout<<"I am derieved class B and Base class for D\n";
    }
};

class C : virtual public A{
public:
    void showC(){
        cout<<"I am derieved class C Base class for D\n";
    }
};

class D : public C, public B{
public:
    void showD(){
        cout<<"I am derieved class D\n";
    }
};



int main(){
    D *ptr = new D;
    ptr->showD();
    ptr->showA();
    return 0;
}
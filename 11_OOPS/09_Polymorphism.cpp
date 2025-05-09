#include<iostream>
using namespace std;

class Student{
public:

    Student(int id, string n, string c){  
        cout<<"Parameterized"<<endl;
    }

    Student(){  // function overloading
        cout<<"Non parameterized"<<endl;
    }

    void print(){
        cout<<"HELLO WORLD !"<<endl;
    }
};

class boy : public Student{
public:
    void print(){  // function overridding
        cout<<"HelloWorld!"<<endl;
    }
};

int main(){
    Student s1(21, "Ankit", "BKBIET");  
    Student s2;
    boy b1;
    b1.print();
    return 0;
}
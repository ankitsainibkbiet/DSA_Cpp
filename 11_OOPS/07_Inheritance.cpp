#include<iostream>
using namespace std;

class human{
public:
    string name;
    int age;

    human(){
        cout<<"human class constructor"<<endl;
    }
};

class student01 : public human{  // single inheritance
public:
    int studentId;
    string collegeName;

    student01() : human(){
        cout<<"student01 class constructor"<<endl;
    } 
};

class student02 : public student01{  // multi-level inheritance
public:
    int CGPA;

    student02() : student01(){
        cout<<"student02 class constructor"<<endl;
    }
    
};

class boy : public human, public student01{  // multiple inheritence
public:
    string color;

    boy() : human(), student01(){   // passing values to parent class constructor from the derived class
        cout<<"Boy class constructor"<<endl;
    }
};

int main(){
    boy b;
    return 0;
}
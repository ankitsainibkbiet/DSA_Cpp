#include<iostream>
using namespace std;

class Student{
public:
    int ID;
    string name;
    string college;

    Student(){  // constuctor do not have any return type , non-perameterized
        college = "BKBIET";
    }

    Student(int id, string n, string c){  // perameterized constructor
        ID = id;
        name = n;
        college = c;
    }

    void getInfo(){
        cout<<"ID = "<<ID<<endl;
        cout<<"Name = "<<name<<endl;
        cout<<"College = "<<college<<endl;
    }
};

int main(){
    Student s1(21, "Ankit", "BKBIET");  // every time we make a object constructor is called automatically
    s1.getInfo();
    return 0;
}
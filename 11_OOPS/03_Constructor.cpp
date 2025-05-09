#include<iostream>
using namespace std;

class Student{
public:
    int ID;
    string name;
    string college;

    Student(){  // non perameterized  (constuctor do not have any return type)
        college = "BKBIET";
    }

    Student(int id, string n, string c){  // perameterized constructor
        ID = id;
        name = n;
        college = c;
    }

    Student(Student &obj){  // copy constructor
        cout<<"Custom Copy Constructor"<<endl;
        ID = obj.ID;
        name = obj.name;
        college = obj.name;
    }

    void getInfo(){
        cout<<"ID = "<<ID<<endl;
        cout<<"Name = "<<name<<endl;
        cout<<"College = "<<college<<endl;
    }
};

int main(){
    Student s1(21, "Ankit", "BKBIET");  // every time we make a object constructor is called automatically
    Student s2(s1);
    s2.getInfo();
    return 0;
}
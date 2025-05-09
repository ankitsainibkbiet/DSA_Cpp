#include<iostream>
using namespace std;

class student{
public:
    string name;
    int* idPtr;

    student(string name, int id){  // Constructor
        this->name = name;
        idPtr = new int;
        *idPtr = id;
    }

    void getInfo(){
        cout<<"Name : "<<name<<endl;
        cout<<"ID : "<<*idPtr<<endl;
    }

    ~student(){  // Destructor
        delete idPtr;
        cout<<"Memory deleted for dynamic allocation";
    }
};

int main(){
    student s1("Ankit", 21);
    s1.getInfo();
    return 0;
}
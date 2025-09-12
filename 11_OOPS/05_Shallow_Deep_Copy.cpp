#include<iostream>
using namespace std;

class student{
public:
    int* idPtr;  // pointer to id which is pointer to nothing here
    string name;

    student(int id, string name){
        this->name = name;
        idPtr = new int;  // assign a location of int type to idPtr
        *idPtr = id;  // then derefrence idPtr and place id there
    }

    student(student &obj){
        name = obj.name;
        idPtr = new int;  // this will again create another int type space with another location
        *idPtr = *obj.idPtr;  // place initial value of s1 id in s2 then we will change it  
    }

    void getInfo(){
        cout<<"ID : "<<*idPtr<<endl;
        cout<<"Name : "<<name<<endl;
    }
};

int main(){
    student s1(21, "Ankit");
    student s2(s1);

    *s2.idPtr = 19;
    s2.name = "Kulhari";
    s2.getInfo();

    s1.getInfo();

    return 0;
}
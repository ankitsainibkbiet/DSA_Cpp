#include<iostream>
using namespace std;

class Student{
public:
    int ID;
    string name;
    string college;

    Student(){  // constuctor do not have any return type
        college = "BKBIET";
    }
};

int main(){
    Student s1;  // every time we make a object constructoe is called automatically
    cout<<s1.college;
    return 0;
}
#include<iostream>
using namespace std;

class Student{
    static int marks;
    int age;
public:
    Student(int x){
        marks = x;
    }

    static void showMarks();
};

int Student :: marks = 0; // static member must be declared outside the class once

void Student :: showMarks(){  // static functions can only use static member
    cout<<"Marks of student is : "<<marks<<endl;
}

int main(){
    Student s1(95);
    Student s2(90);

    s1.showMarks();
    s2.showMarks();
    return 0;
}
#include<iostream>
using namespace std;

class Teacher{
private:
    int salary;

public:
    string name;
    string branch;

    void setSalary(int s){  // setter
        salary = s;
    }
    void getSalary(){  // getter
        cout<<salary;
    }
    
};

int main(){
    Teacher t1;
    t1.name = "Pradeep Sir";
    t1.branch = "CSE";
    
    t1.setSalary(75000);  // to access private properties indirectly
    
    cout<<t1.name<<endl;
    cout<<t1.branch<<endl;
    t1.getSalary();
    
    return 0;
}
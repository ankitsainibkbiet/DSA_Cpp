#include<iostream>
using namespace std;

class bank{  // Encapsulation is collection of different properties and methods in a class
public:
    string bankName;
    string location;
};

int main(){
    bank b1;
    b1.bankName = "SBI";
    b1.location= "Pilani";
    return 0;
}
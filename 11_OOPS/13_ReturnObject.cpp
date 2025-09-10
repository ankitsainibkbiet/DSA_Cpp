#include<iostream>
using namespace std;

class Complex{
    int x, y;
public:
    Complex(){}

    Complex(int real, int imaginary){
        x = real; y = imaginary;
    }

    Complex sum(Complex c1, Complex c2){
        Complex c3;
        c3.x = c1.x + c2.x;
        c3.y = c1.y + c2.y;
        return c3;
    }

    friend void show(Complex);
};

void show(Complex t){
    cout<<t.x<<","<<t.y;
}

int main(){
    Complex c1(2, 4);
    Complex c2(2, 4);
    Complex c3, c4;
    c4 = c3.sum(c1, c2);
    show(c4);
    return 0;
}
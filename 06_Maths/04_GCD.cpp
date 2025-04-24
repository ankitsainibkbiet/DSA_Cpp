#include<iostream>
using namespace std;

void GCD(){
    int num1 = 20, num2 = 28;
    int range = min(num1, num2);
    int result = 0;

    if(num1 == 0){
        cout<<num2;
        return;
    }else if(num2 == 0){
        cout<<num1;
        return;
    }

    for(int i=2; i<=range; i++){
        if(num1%i == 0 && num2%i == 0){
            result = i;
        }
    }

    cout<<result; 
}

int recursiveGCD(int a, int b){
    if(a == 0) return b;
    if(b == 0) return a;

    if(a > b){
        recursiveGCD(a%b, b);
    }else{
        recursiveGCD(a, b%a);
    }
}

// NOTE :- a*b = LCM * GCD(a,b)

int main(){
    // GCD();

    int a = 500, b = 400;
    cout<<recursiveGCD(a, b);
    return 0;
}
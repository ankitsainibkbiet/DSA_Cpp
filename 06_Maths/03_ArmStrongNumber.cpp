#include<iostream>
using namespace std;

void armstrongNumber(){
    int n = 153, digit = 0, result = 0;
    int org = n;

    while(n > 0){
        digit = n%10;
        int cube = 1;
        for(int i=0; i<3; i++){
            cube *= digit;
        }
        result += cube;
        n /= 10;
    }

    if(result == org){
        cout<<"Given number is ArmStrong number";
    }else{
        cout<<"Given number is not a ArmStrong number";
    }
}

int main(){
    armstrongNumber();
    return 0;
}
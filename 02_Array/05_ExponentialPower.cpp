#include<iostream>
using namespace std;

int main(){
    double number = 8;
    int binaryPower = 2;
    double ans = 1;

    if(binaryPower < 0){ // if power is negative
        number = 1/number;
        binaryPower = -binaryPower;
    }

    while(binaryPower > 0){  // binary number always contain logn+1 digits
        if(binaryPower % 2 == 1){
            ans *= number;
        }
        binaryPower /= 2;
        number *= number;
    }

    cout<<ans;

    return 0;
}
#include<iostream>
using namespace std;

bool isPrime(int i){
    if(i < 2) return false;
    for(int j=2; j*j <= i; j++){
        if(i%j == 0){
            return false;
        }
    }
    return true;
}

bool allDigitPrime(int i){
    while( i > 0){
        int digit = i%10;
        if(digit != 2 && digit != 3 && digit != 5 && digit != 7) return false;
        i = i/10;
    }
    return true;
}

int main(){
    int N = 1000;
    for(int i=2; i<=N; i++){
        if(isPrime(i) && allDigitPrime(i)){
            cout<<i<<" ";
        }
    }
    return 0;
}
#include<iostream>
using namespace std;

long long factorial(int n){
    if(n == 1 || n == 0){
        return 1;
    }
    return factorial(n-1) * n;
}

int main() {
    int n = 50;
    cout<<factorial(n);
    return 0;
}
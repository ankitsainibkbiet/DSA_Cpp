#include<iostream>
#include<climits>
using namespace std;

int main(){
    int a = 212;
    int org = a, ans = 0, digit;

    while(a > 0){
        digit = a % 10;
        if(ans > INT_MAX/10 || ans < INT_MIN/10){  // check for overflow
            cout<<"value out of interger range";
        }
        ans = (ans*10) + digit;
        a /= 10;
    }

    if(ans == org){
        cout<<"Palindrom Number";
    }else{
        cout<<"Not Palindrom Number";
    }

    return 0;
}
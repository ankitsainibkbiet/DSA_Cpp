#include<iostream>
#include<vector>
using namespace std;

void romanToInteger(){
    string str = "MCMXCIV";
    int n = str.length();
    int ans = 0;

    for(int i=0; i<n; i++){

        if(str[i] == 'I'){
            if(i<n-1 && (str[i+1] == 'V' || str[i+1] == 'X')){
                ans -= 1;
            }else{
                ans += 1;
            }
        }

        if(str[i] == 'V'){
            ans += 5;
        }

        if(str[i] == 'X'){
            if(i<n-1 && (str[i+1] == 'L' || str[i+1] == 'C')){
                ans -= 10;
            }else{
                ans += 10;
            }
        }

        if(str[i] == 'L'){
            ans += 50;
        }

        if(str[i] == 'C'){
            if(i<n-1 && (str[i+1] == 'D' || str[i+1] == 'M')){
                ans -= 100;
            }else{
                ans += 100;
            }
        }

        if(str[i] == 'D'){
            ans += 500;
        }
        
        if(str[i] == 'M'){
            ans += 1000;
        }
    }

    cout<<ans;
}

int main() {
    romanToInteger();
    return 0;
}
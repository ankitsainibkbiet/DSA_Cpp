#include<iostream>
#include<vector>
using namespace std;

int main() {
    string str = "0d";
    
    for(int i=0; i<str.length(); i++){
        if(str[i] >= '0' && str[i] <= '9' && i > 0){  
            str.erase(i-1, 2);
            i = i-2;
        }
    }

    if(str[0] >= '0' && str[0] <= '9'){
        str.erase(0,1);
    }

    cout<<str;

    return 0;
}
